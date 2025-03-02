#include<stdio.h>

void main()
{
	int kan;
	int eng;
	int hin;
	int sci;
	int soc; 
	int math;
	int sum;
	int percentage;

	printf("enter the marks of Kannada : ");
	scanf("%d",&kan);
	printf("enter the marks of english : ");
	scanf("%d",&eng);
	printf("enter the marks of hindi : ");
	scanf("%d",&hin);
	printf("enter the marks of science : ");
	scanf("%d",&sci);
	printf("enter the marks of social : ");
	scanf("%d",&soc);
	printf("enter the marks of mathametics : ");
	scanf("%d",&math);

	sum = (kan + eng + hin + sci + soc + math) ;

	percentage = ((sum*100)/600);
	printf("the student got percentage is %d\n",percentage);
	

	if(percentage > 90)
	{
		printf("the grade is A\n");
	}
	else if(percentage > 80)
	{
		printf("the grade is B\n");
	}
	else if(percentage > 70)
	{
		printf("the grade is C\n");
	}
	else if(percentage > 60)
	{
		printf("the grade is D\n");
	}
	else 
	{
		printf("the student is failed\n");
	}
}


