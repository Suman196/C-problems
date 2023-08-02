#include<stdio.h>
int main(){
	long long n;
	printf("Enter a number: ");
	scanf("%lld",&n);
	int count  =0;
	int rem,rev =0;
	while(n!=0)
	{
		rem = n%10;
		rev = rev *10+rem;
		n =n/10;
	}
	printf("The reverse of number is: %d",rev);
	return 0;
	}
		
