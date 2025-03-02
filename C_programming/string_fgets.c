#include<stdio.h>

void main()
{
	char str[500];
	
	printf(" Enter the string : ");
	fgets(str,500,stdin); // this fgets used to because scanf is unable to read complete string when string contains spaces

	printf("%s\n",str);

	printf("%c\n",str[13]);//print the specfied char present in that index number 
}
