#include<stdio.h>
main(){
	int a,b;
	printf("Enter The Value Of A =");
	scanf("%d",&a);
	printf("Enter The Value Of B =");
	scanf("%d",&b);
	
	a=a+b;//a=a*b//
	b=a-b;//b=a/b//
	a=a-b;//a=a/b//
	
	printf("A: %d\n",a);
	printf("B: %d",b);	


	int c;
	
	printf("\n enter the value of A:");
	scanf("%d",&a);
	
	printf("\n enter the value of B:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("A: %d\n",a);
	printf("B: %d",b);
	
	int x,y;
	printf("\n Enter The Value Of X =");
	scanf("%d",&x);
	printf("\n Enter The Value Of y =");
	scanf("%d",&y);
	
	x=x*y;
	y=x/y;
	x=x/y;
	
	printf("X: %d\n",x);
	printf("Y: %d",y);	
}


