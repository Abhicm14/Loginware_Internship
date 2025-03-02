#include<stdio.h>

void main()
{
	int count;
	int num;
	int result;

	printf("Enter the required table number : ");
	scanf("%d",&num);
	
	for(count = 1; count <=10; count++)
	{
		result = num * count;
		printf(" %d * %d = %d\n",num,count,result);
	}
}	
