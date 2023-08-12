#include<iostream>
#include<vector>
using namespace std;
int main(){
	int x;
	vector<int> arr;
	cout<<"Enter a number: ";
	cin>>x;
	for(int i=2;i<=x;i++){
		if(x%i==0){
			arr.push_back(i);
		}
	}
	for(int i=0;i<arr.size();i++){
		cout<<" "<<arr[i];
		}
	return 0;
}
	
