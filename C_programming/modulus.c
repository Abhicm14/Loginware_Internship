#include<stdio.h>

void main()
{
	int num1;
	int num2;
	int sum;

	printf("Enter the first number :");
	scanf("%d",&num1);
	printf("Enter the secound number :");
        scanf("%d",&num2);
	sum = num1 % num2;
	printf("Modules of %d and %d : %d\n",num1,num2,sum);
}
