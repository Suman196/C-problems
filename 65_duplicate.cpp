d#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Max limit: ";
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    int j=0;
    for(int i=0;i<n-1;i++){
        if(ar[i]!=ar[i+1])
            ar[j++]=ar[i];
    }
    ar[j++]=ar[n-1];
    for(int i=0;i<j;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
