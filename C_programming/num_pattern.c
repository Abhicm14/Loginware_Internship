#include<stdio.h>


void main()
{
	int num;
	int count;
	int result;
	int j;

	printf("Enter the Single Digit Number :");
	scanf("%d",&num);
	for(count =0; count <= num; ++count)
	{
		for(j =0; j <= count; ++j)
		{
		printf("%d",j);
		}
		printf("\n");
	}

}

