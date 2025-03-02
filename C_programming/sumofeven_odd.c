#include<stdio.h>

void main()
{
	int count;
	int sum_even = 0;
	int sum_odd = 0;
	int num;

	printf("Enter the number  :");
	scanf("%d",&num);
	for(count = 0; count <= num; count++)
	{
		if(count % 2 == 0)
		{
			sum_even += count;
			
		}
		else
		{
			sum_odd += count;
			
		}
	}
	printf("The sum of Even numbers is : %d\n",sum_even);
	printf("The sum of Odd numbers is : %d\n",sum_odd);
}
