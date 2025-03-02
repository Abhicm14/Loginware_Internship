#include<stdio.h>
#include<string.h>

void main()
{
	char str[50];
	char str1[50];

	printf("Enter the String : ");
	scanf("%s",str);
	printf("Enter the String1 : ");
	scanf("%s",str1);

	if(strcmp(str,str1) ==0)
	{
		printf("The strings are Same \n");
	}
	else
	{
		printf("The strings are Different\n");
	}
}
