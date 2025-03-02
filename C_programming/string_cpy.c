#include<stdio.h>
#include<string.h>

void main()
{
	char str[50];
	char str1[50];

	printf("Enter the string :");
	scanf("%s",str);

	strcpy(str1,str);

	printf("String : %s\n",str);
	printf("String1 : %s\n",str1);
}	
