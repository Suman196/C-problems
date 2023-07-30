#include<stdio.h>
int main(){
	float x;
	printf("Enter radius of circle: ");
	scanf("%f",&x);
	double rad = 3.14*x*x;
	printf("Area of circle is: %0.2lf",rad);
}
