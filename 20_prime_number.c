#include<stdio.h>
int main(){
	int n,f=0;//if f=0 then it is prime (the number)
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n==0 || n==1)
		printf("%d is not prime number.",n);
	for(int i=2;i<=n/2;i++){
		if(n%i==0)
			printf("%d is not prime number.",n);
			f=1;
			break;
			
	}
	if(f==0)
		printf("%d is prime number.",n);
	else
		printf("%d is not prime number.",n);
	return 0;	
	}
