#include<stdio.h>
#include<string.h>

void main()
{
	int length;
	char str[50];

	printf(" Enter the string :");
	fgets(str,50,stdin);

	length = strlen(str);

	printf("The length of given string is : %d\n",length);
}

