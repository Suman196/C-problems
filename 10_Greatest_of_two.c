#include<stdio.h>
int main(){
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d %d",&x,&y);
	
	int max = (x>y)? x:y;
	printf("The greatest of two integer numbers is: %d",max);
	return 0;
}
