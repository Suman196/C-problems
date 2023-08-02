#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int pik = n;
	int prev=n;
	int rem;
	int count=0;
	do{
		n=n/10;
		count++;
	}while(n!=0);
	while(prev!=0)
	{
		rem = prev%10;
		sum = sum+pow(rem,count);
		prev = prev/10;
	}
	if(pik ==sum)
		printf("Entered number %d is armstrong number ",pik);
	else
		printf("Not armstrong number");
	return 0;
	}
	
