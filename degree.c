#include<stdio.h>

main(){
	float fahrenheit,celsius;
	printf("Enter The Temperature = ");
	scanf("%f",&celsius);
	fahrenheit = celsius*9/5+32;
	printf("Fahrenheit = %.2f",fahrenheit);
}
