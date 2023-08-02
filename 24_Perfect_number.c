//a positive integer that is equal to the sum of its proper divisors. 
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
			sum =sum+i;
	}
	if(sum==n)
		printf("%d is perfect number.",n);
	else
		printf("%d is not perfect number.",n);
	
	return 0;
	}
