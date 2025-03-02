// With Arguments and With Return function for Division
#include<stdio.h>

int division(int var1, int var2)
{
	int result;

	result = var2 / var1;

	return result;
}

void main()
{
	int num1;
	int num2;
	int div;

	printf(" Enter the Numbers :");
	scanf("%d",&num1);
	scanf("%d",&num2);

	div = division(num1,num2);

	printf("Division Of %d and %d is : %d \n",num2,num1,div);
}

