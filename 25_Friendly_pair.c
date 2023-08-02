//Friendly Pair The numbers whose ( sum of divisors ) / number ,ratio is same are known as Friendly Pair Numbers.
#include<stdio.h>
int main(){
	int x,y,sum1=0,sum2=0,n1,n2;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	for(int i=1;i<x;i++)
	{
		if(x%i==0)
			sum1=sum1+i;
	}
	n1 = sum1/x;
	for(int i=1;i<y;i++)
	{
		if(y%i==0)
			sum2=sum2+i;
	}
	n2=sum2/y;
	if(n1==n2)
		printf("%d %d are friendly pair number.",x,y);
	else
		printf("%d %d are not friendly pair number.",x,y);
	return 0;
	}
