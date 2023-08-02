#include<stdio.h>
int main(){
	long long n;
	printf("Enter a number: ");
	scanf("%lld",&n);
	int rem,sum=0;
	do{
		rem  = n%10;
		n = n/10;
		
		sum  =sum+rem;
	}while(n!=0);
	printf("Sum: %d",sum);
	return 0;
	}
