#include<stdio.h>

void main()
{
	int num;

	printf("Enter the number to check even or odd : ");
	scanf("%d",&num);
	if(num % 2 ==0)
	{
		printf("The Given Number is Even\n");
	}
	else
	{
		printf("The Given number is odd\n");
	}
}
