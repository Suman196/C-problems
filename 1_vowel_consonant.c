#include<stdio.h>
int main(){
	char v;
	printf("Enter a character: ");
	scanf("%c",&v);
	if(v=="a" || v=="A" || v=="e" || v=="E" || v=="i" || v=="I" || 		v=="o" || v=="O" || v=="u" || v=="U")
		printf("%c is vowel",v);
	else
		printf("%c is consonant",v);
}
