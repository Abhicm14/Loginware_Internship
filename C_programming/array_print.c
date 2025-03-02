#include<stdio.h>


void main()
{
	int count;
	int arr[5] ;

	for(count =0;count < 5;count++)
	{
		printf(" Enter the Value of arr[%d] : ",count);
		scanf("%d",&arr[count]);
	}

	for(count =0;count < 5; count++)
	{
		printf(" arr[%d] : %d\n",count,arr[count]);
	}

}



