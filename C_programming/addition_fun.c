// No Arguments and No Return Type of Addition Function
#include<stdio.h>

void addition(void);

void main()
{
	addition();
}

void addition(void)
{
	int num1;
	int num2;
	int sum;

	printf("Enter the 2 Numbers for Addition :");
	scanf("%d %d",&num1,&num2);

	sum = num1 + num2;

	printf("Sum of %d and %d is : %d \n",num1,num2,sum);
}
