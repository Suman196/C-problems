#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int prev =n;
	int rem,rev=0;
	while(n!=0)
	{
		rem = n%10;
		rev = rev*10+rem;
		n=n/10;
	}
	if(rev==prev)
		printf("The entered number %d is palindrome.",prev);
	else
		printf("The entered number %d is  not palindrome.",prev);
	return 0;
	}
		
		
