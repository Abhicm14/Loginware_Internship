#include<stdio.h>


void main()
{
	int choice;

	printf(" 1.Option 1 \n");
	printf(" 2.Option 2 \n");
	printf(" 3.Option 3 \n");
	printf(" 4.Option 4 \n");
	printf(" 5.Option 5 \n");
	printf(" 6.Option 6 \n");
	printf(" 7.Option 7 \n");

	printf(" Please select the Option :");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1 :
		{
			printf(" Sunday\n");
			break;
		}
		case 2 :
		{
			printf(" Monday\n");
			break;
		}
		case 3 :
		{
			printf(" Tuesday\n");
			break;
		}
		case 4 :
		{
			printf(" Wednesday\n");
			break;
		}
		case 5 :
		{
			printf(" Thrusday\n");
			break;
		}
		case 6 : 
		{
			printf(" Friday\n");
			break;
		}
		case 7 :
		{
			printf(" Saturday\n");
			break;
		}
		default :
			printf("Entered the wrong option \n");
		
	}
}
