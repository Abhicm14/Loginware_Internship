#include<stdio.h>


void main()
{
	int breadth;
	int length;
	int area;
	int perimeter;

	printf("Enter the Breadth of the rectangle : ");
	scanf("%d",&breadth);
	printf("Enter the length of the rectangle : ");
	scanf("%d",&length);
	area = breadth * length;
	perimeter = (2*(breadth + length));
	printf("The area of Rectangle is : %d\n",area);
	printf("The perimeter of rectangle is : %d\n",perimeter); 
}
