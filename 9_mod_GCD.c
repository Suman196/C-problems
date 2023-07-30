#include<stdio.h>
int main(){
	int n1,n2,i,count=0;
	printf("Enter two numbers: ");
	scanf("%d %d", &n1,&n2);// 81,153
	n1 = (n1>0)? n1:-n1;
	n2 = (n2>0)? n2: -n2;
	while(n1!=n2){//81!=153, 81!=72, 9!=72
		if(n1>n2)//81>72
			n1 = n1-n2;//n1 = 81-72=9
		else
			n2 = n2-n1;//n2 = 153-81=72
	count++;
	}
	printf("The gcd is : %d and count of loop %d", n1,count);
	return 0;
}
