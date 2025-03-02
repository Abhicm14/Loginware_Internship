#include<stdio.h>


void main()
{
	int num;
	int factorial = 1;
	int count;

	printf("Enter the Number :");
       	scanf("%d",&num);

	if(num ==0)
	{
		printf("factorial Cannot be Calculated\n");
	}
	else
	{
	for(count =1; count <= num; count++)
	{
		factorial *= count;
	}
	printf("Factorial of %d is : %d\n",num,factorial);
	}
}
			
