#include<stdio.h>
int main(){
	int n;
	printf("Max limit: ");
	scanf("%d",&n);
	int sum=0;//0 is a whole number not a natural number
	for(int i=1;i<=n;i++)
		sum = sum+i;
	printf("Sum of natural number: %d",sum);
	return 0;
}
