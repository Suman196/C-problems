#include<stdio.h>
int main(){
	int n1,n2,i,gcd;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1,&n2);
	n1 = (n1>0)? n1:-n1;
	n2 = (n2>0)? n2: -n2;
	for(i=1;i<=n1 && i<=n2;++i){// i should be less or equal to n1 and n2
		if((n1 % i==0) && (n2 % i==0))
				gcd =i;
	}
	printf("The gcd is : %d", gcd);
	return 0;
}
