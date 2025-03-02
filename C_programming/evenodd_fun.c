#include<stdio.h>

int evenodd();

void main()
{
	int result;
	int num;

	printf("Enter the number :");
	scanf("%d",&num);
	
	result = evenodd(num);
	printf(" Return Value is : %d\n ",result);
	
	if(result == 0)
	{
		printf(" The %d is Even Number\n",num);
	}
	else
	{
		printf(" The %d is Odd Number\n",num);
	}
}

int evenodd(int num)
{
	if (num % 2 ==0)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
