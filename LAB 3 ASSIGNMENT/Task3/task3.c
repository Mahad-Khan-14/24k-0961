#include <stdio.h>
int main(){
	double salary,taxRate,tax,salaryAfterTax;
	printf("Enter your salary : \n");
	scanf("%lf",&salary);
	printf("enter the taxRate(InPCT) : \n");
	scanf("%lf",&taxRate);
	tax = salary * (taxRate/100);
	salaryAfterTax = salary - tax;
	printf("tax = Rp%.2lf\n", tax);
	printf("salaryAfterTax = Rp%.2lf\n",salaryAfterTax);
}