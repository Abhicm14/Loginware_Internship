#include<stdio.h>

void Addition(void);
void Subtraction(void);
void Multiplication(void);
void Division(void);

void main()
{
	int option;

	printf(" 1.Addition \n");
	printf(" 2.Subtraction\n");
	printf(" 3.Multiplication\n");
	printf(" 4.Division\n");

	printf(" Enter the Required operation :");
	scanf("%d",&option);
        
		switch(option)
		{
			case 1 :
				{
					Addition();
					break;
				}
			case 2 :
				{
					Subtraction();
					break;
				}
			case 3 :
				{
					Multiplication();
					break;
				}
			case 4 :
				{
					Division();
					break;
				}
			default :
				printf(" Entered the Wrong option \n");
		}
	
}

void Addition(void)
{
	int num1;
	int num2;
	int sum;

	printf("Enter the Num1 :");
	scanf("%d",&num1);
	printf("Enter the Num2 : ");
	scanf("%d",&num2);

	sum = num1 + num2;

	printf("Addition of %d and %d is : %d\n",num1,num2,sum);

}

void Subtraction(void)
{
	int num1;
	int num2;
	int sub;

	while(1)
	{
		printf("Enter the Num1 : ");
		scanf("%d",&num1);
		printf("Enter the Num2 : ");
		scanf("%d",&num2);
		if(num1 < num2)
		{
			printf(" Reenter the Num1 and Num2\n");
			continue;
		}
		else
		{
			sub = num1 - num2;
			printf(" Difference of %d and %d is : %d\n",num1,num2,sub);
		}
		break;

	}



}

void Multiplication(void)
{
	int num1;
	int num2;
	int result;

	printf("Enter the Num1 :");
	scanf("%d",&num1);
	printf("Enter the Num2 :");
	scanf("%d",&num2);

	result = num1 * num2;

	printf(" Product of %d and %d is : %d\n",num1,num2,result);
	
}

void Division(void)
{
	int num1;
	int num2;
	int sum;

	while(1)
	{
		printf(" Enter the Num1 : ");
		scanf("%d",&num1);
		printf(" Enter The Num2 : ");
		scanf("%d",&num2);
		if(num1 > num2)
		{
			printf("ReEnter The Num1 and Num2 \n");
		}
		else
		{
			sum = num2/num1;
			printf("Division of %d and %d is : %d\n",num1,num2,sum);
			break;
		}
		
	}
}

