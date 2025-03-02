#include<stdio.h>

void printarray(int num,int arr[]);

void main()
{
	int n;
	int count;

	printf(" Enter the Number of Elements In array :");
	scanf("%d",&n);
	 int arr[n];

	for(count = 0 ; count < n; count++)
	{
		printf(" Enter the elements of array[%d] : ",count);
		scanf("%d",&arr[count]);
	}

	printarray(n,arr);
}

void printarray(int num,int arr[])
{
	int count;

	for(count = 0; count < num; count++)
	{
		printf(" Array[%d] : %d\n",count,arr[count]);
	}
}

