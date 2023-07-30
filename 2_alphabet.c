#include<stdio.h>
int main(){
	char x;
	printf("Enter a character: ");
	scanf("%c",&x);
	if((x>='a' && x<='z') || (x>='A' && x<='Z')) //because a to z are alphabets
		printf("%c is alphabet",x);
	else
		printf("%c is not alphabet",x);
	}
