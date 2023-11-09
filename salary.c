#include<stdio.h>
// suppose a BaseSalary = b //
// H.R.A = h //
// D.A = d//
//T.A = t//
// GrossSalary = total//
main(){
	float b,h,d,t,total;
	
	printf("Enter The Your Salary In Rupees =");
	scanf("%f",&b);
	
	h=10*b/100;
	d=5*b/100;
	t=8*b/100;

	total = b+h+d+t;
	
	printf("Total Amount is :%.2f",total);	
}
