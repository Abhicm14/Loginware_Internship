#include<stdio.h>
#include<string.h>

void main()
{
	char str[50];
	char str1[50];

	printf("Enter the First String : ");
	scanf("%s",str);

	printf("Enter the Second String : ");
	scanf("%s",str1);

	strcat(str,str1);
	printf("String : %s\n",str);
	printf("String : %s\n",str1);
}

