#include<stdio.h>
int main(){
	int n, fact=1;
	printf("Enter max limit for factorial: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		fact = fact*i;
	printf("Factorial of given number: %d",fact);
	return 0;
	}
