#include <stdio.h>
int main(){
	float P, R, T, I;
	
	printf("Enter principle (100<P<1,000,000) : \n");
	scanf("%f",&P);
	
	printf("Enter Rate of interest (5%<R<10%) : \n");
	scanf("%f",&R);
	
	printf("Enter Time period (1YEAR<T<10YEAR) : \n");
	scanf("%f",&T);
	
	I = (P*R*T)/100;
	
	printf("The simple interest is : %.2f\n", I);
	
	return 0;
}