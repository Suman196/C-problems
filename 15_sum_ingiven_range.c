#include<stdio.h>
int main(){
	int n;
	printf("Max limit: ");
	scanf("%d",&n);
	int sum=0;
	for(int i=0;i<=n;i++)
		sum = sum+i;
	printf("Sum :%d",sum);
	return 0;
}
