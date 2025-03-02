#include<stdio.h>

void main()
{
	char name;
	int date,month,year;
	
	printf("Enter the name : ");
	scanf("%c",&name);
	printf("Enter the date of Birth in the formate DD/MM/YYYY :");
	scanf("%d/%d/%d",&date,&month,&year);
	printf("%c is born on %d/%d/%d\n ",name,date,month,year);
}
