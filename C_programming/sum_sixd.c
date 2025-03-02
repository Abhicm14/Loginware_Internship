#include<stdio.h>


void main()
{
	int num;
	int sum = 0;
	int rem;

	printf("Enter the number :");
	scanf("%d",&num);

	while(num != 0)
	{
		rem = num % 10;
		sum += rem;
		num /= 10;
	}
	printf("The sum of given digits is : %d\n",sum);
}
	
