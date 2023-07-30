#include<stdio.h>
int main(){
	double x;
	printf("Enter a number: ");
	scanf("%lf",&x);
	if(x<0)
		printf("The number %0.2lf is negative",x);// to print inside statement use as x like this way
	else
		printf("The number %0.2lf is positive",x);//0.2 for maintaining the ppoint value at right side
} 
