#include <bits/stdc++.h>
using namespace std;
void countfreq(int arr[],int n){
	vector<bool> visited(n,false);//not visited fill up
	for(int i=0;i<n;i++){
	if(visited[i]==true)
		continue;
	int count =1;//because at first one elemet is already in the array
	for(int j=i+1;j<n;j++){
		if(arr[i]==arr[j]){
			visited[j]=true;//we have got same element that is already visited
			count++;
		}
	}
	cout<<arr[i]<<" "<<count<<endl;
	}
}
int main(){
	int arr[]={15,20,20,3,3,3,4,5,6};
	int n= sizeof(arr)/sizeof(arr[0]);
	countfreq(arr,n);
	return 0;
}






//another one
/*
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
    vector<bool> v(n,false);
    for(int i=0;i<n;i++){
        if(v[i]==true)
            continue;
        int count =1;
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                v[j]=true;
                count++;
            }
        }
        cout<<ar[i]<<" "<<count<<endl;
    }
   }
  */   
    
  
    
    return 0;
}
