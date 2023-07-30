#include<stdio.h>
int main(){
	long long n;
	int count=0;
	printf("Enter a number: ");
	scanf("%lld",&n);//3453
	do{
		n= n/10;//3453/10=345,345/10=34,34/10=3,3/10=0
		count++;//or ++count
	}while(n!=0);
	
  printf("Number of digits: %d", count);
  return 0;
  }
