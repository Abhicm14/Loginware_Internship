#include<stdio.h>


void main()
{
	int arr[5];
	int count;
	int max = 0;

	for(count = 0; count < 5; count++)
	{
		printf("Enter  Element arr[%d] :",count);
		scanf("%d",&arr[count]);
	}
	
	for(count = 0; count < 5; count++)
	{
		if(max < arr[count])
		{
			max = arr[count];
		}
	}
	printf("The maximum number in the array is : %d \n",max);
}
