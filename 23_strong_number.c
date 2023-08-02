//Strong number is 145 = 1!+4!+5!
#include<stdio.h>
int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int prev=n,rem,fact=1,sum=0;
	while(n!=0){
		rem = n%10;
		for(int i=1;i<=rem;i++){
			fact = fact*i;
			
			}
		sum = sum+fact;
		n=n/10;
		}
	printf("%d is strong number",prev);
	return 0;
	}
		
