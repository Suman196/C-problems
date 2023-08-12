#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter 1st num: ";
    cin>>a;
    cout<<"Enter 2nd num: ";
    cin>>b;
    for(int i=a;i<=b;i++){
        if(i==1 || i==0)
            continue;
        int flag=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
