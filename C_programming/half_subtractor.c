#include<stdio.h>


void main ()
{
	int A;
	int B;
	int D;
	int Bo;
	int a;

	printf("Enter the input A in binary : ");
	scanf("%d",&A);
	printf("Enter the input B in binary : ");
	scanf("%d",&B);

	D = A^B;
	a = ~A;
	Bo = (a & B);

	printf("The Difference of %d and %d is : %d\n",A,B,D);
	printf("The Barrow of %d and %d is : %d\n",A,B,Bo);
}
