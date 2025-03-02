#include<stdio.h>

void main()
{
	float num1;
	int num2;
	float div;

	printf("Enter the first number:");
	scanf("%f",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	div = num1 / num2;
	printf("Division of %f and %d : %f\n",num1,num2,div);
}
