// No arguments and With Return Value fun for subtraction
#include<stdio.h>

int subtraction(void);

void main()
{
	int result;

	result = subtraction();

	printf(" Subtraction : %d \n",result);

}

int subtraction(void)
{
	int num1;
	int num2;
	int sub;

	printf("Enter the numbers : ");
	scanf("%d %d",&num1,&num2);

	sub = num2 - num1;

	return sub;
}
