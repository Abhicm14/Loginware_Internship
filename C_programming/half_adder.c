#include<stdio.h>


void main()
{
	int A;
	int B;
	int sum;
	int carry;
	
	printf("Enter the A input in binary:");
	scanf("%d",&A);
	printf("Enter the B input in binary:");
	scanf("%d",&B);

	sum = A ^ B;
	carry = A & B;
	printf("Sum of %d and %d is : %d\n",A,B,sum);
	printf("Carry of %d and %d is : %d\n",A,B,carry);
}
