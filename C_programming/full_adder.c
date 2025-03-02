#include<stdio.h>


void main()
{
	int A;
	int B;
	int Cin;
	int sum;
	int Cout;

	printf("Enter the A input in binary :");
	scanf("%d",&A);
	printf("Enter the B input in binary :");
	scanf("%d",&B);
	printf("Enter the Cin input in binary :");
	scanf("%d",&Cin);

	sum = A^B^Cin;
	Cout = (A & B)|(B & Cin)|(A & Cin);

	printf("Sum of  %d , %d and %d is : %d\n",A,B,Cin,sum);
	printf("Carry of %d , %d and %d is : %d\n",A,B,Cin,Cout);
}
