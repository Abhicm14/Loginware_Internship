#include<stdio.h>


void main()
{
	int num;
	int count;
	int temp;
	int n1 =0; 
	int n2 =1;

	printf("Enter the Numder :");
	scanf("%d",&num);
	
	printf("Fabonacci Series :%d %d",n1,n2);

	for(count = 3; count <= num; count++)
	{
		temp = n1 + n2;
		printf(" %d",temp);
		n1 = n2;
		n2 = temp;
	}
	printf("\n");
}
