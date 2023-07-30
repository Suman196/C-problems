#include<stdio.h>
#include<stdlib.h>
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b); // 10 20
	a = a-b;// -10
	b=a+b;// 10
	a=b-a;//10+10
	
	printf("After swap the values are: %d %d",a,b);
	return 0;//without return 0 the program can successfully compile and run without error
}
	
