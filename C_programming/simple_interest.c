#include<stdio.h>


void main()
{
	int amount;
	float time;
	float interest;
	float result;
	float simple_interest;

	printf("Enter the amount to calculate Simple Interst : ");
	scanf("%d",&amount);
	printf("Enter the interest per annum :");
	scanf("%f",&interest);
	printf("Enter the Time in years :");
	scanf("%f",&time);
	simple_interest = (amount * time * interest) / 100;
 printf("Simple Interest of the %d for %.2f years With interest %.2f is : %.2f\n",amount,time,interest,simple_interest);
}	
