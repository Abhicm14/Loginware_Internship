#include<stdio.h>



void main()
{
	int A;
	int B;
	int Bin;
	int Bout;
	int D;
	
	printf(" Input A : ");
	scanf("%d",&A);
	printf("Input B :");
	scanf("%d",&B);
	printf("Input Bin :");
	scanf("%d",&Bin);

	D = A^B^Bin;
	Bout = (~A)&B | (~A)&Bin | B&Bin;
	printf("Difference : %d\n",D);
	printf("Barrow : %d\n",Bout);
}
