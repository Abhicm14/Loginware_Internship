#include<stdio.h>


void main()
{
	int count;
	char arr[5] ;
	char ch;

	for(count =0;count <5;count++)
	{
		printf("Enter the arr[%d]: ",count);
		scanf("%c",&arr[count]);
		scanf("%c",&ch);
	}
	
	for(count =0;count < 5;count++)
	{
		printf("arr[%d] = %c\n",count,arr[count]);
	}
}
