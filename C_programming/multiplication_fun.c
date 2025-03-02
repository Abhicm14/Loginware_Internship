// Arguments With No Return Value Function 
#include<stdio.h>

void multiplication(int var1,int var2)
{
	int result;

	result = var1 * var2;

	printf(" Product Of %d and %d is : %d \n",var1,var2,result);
}

void main()
{
	int num1;
	int num2;

	printf("Enter the Numbers :");
	scanf("%d %d",&num1,&num2);

	multiplication(num1,num2);
}
