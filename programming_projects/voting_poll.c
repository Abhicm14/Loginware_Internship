#include<stdio.h>


void main()
{
	int choice;
	int password;
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	int sum4 = 0;
	int sum5 = 0;
	
	
	while(1)
	{
		printf("\n");
		printf("--------------------------------------------------\n");
		printf("          Election Commission of India            \n");
		printf("--------------------------------------------------\n");
		printf("\n");
		printf("\n");
		printf(" Sl.No           Candidate Name                   \n");
		printf(" 1.              Sudeep                         \n");
		printf(" 2.              Rakshit                           \n");
		printf(" 3.              Ganesh                        \n");
		printf(" 4.              Upendra                         \n");
		printf(" 5.              Rishab                              \n");
		printf("\n");
		printf("\n");
		printf("Please Vote For The Candidates :  ");
		scanf("%d",&choice);
		printf("\n");
		printf("  ----------------------------------------------------\n");
		printf(" | Note :  Press 6 to see Results or press 7  for Exit|\n");
		printf("  ----------------------------------------------------\n");
		printf("\n");


		switch(choice)
		{
			case 1 :
				{
					sum1 += 1;
					printf(" You have Voted for Abhishek \n");
					printf("\n");
					printf(" Thanks for Voting \n");
					break;
				}	
			case 2 :
				{
					sum2 += 1;
					printf(" You have Voted for Amar \n");
					printf("\n");
					printf(" Thanks for Voting \n");
					break;
				}
			case 3 :
				{
					sum3 += 1;
					printf(" You Have Voted for Aniruddha \n");
					printf("\n");
					printf(" Thanks For Voting \n");
					break;
				}
			case 4 :
				{
					sum4 += 1;
					printf(" You Have Voted for Akilesh \n");
					printf("\n");
					printf(" Thanks For Voting \n");
					break;
				}
			case 5 :
				{
					sum5 += 1;
					printf(" You Have Voted for Uday \n");
					printf(" \n");
					printf(" Thanks For Voting \n");
					break;
				}
			case 6 :
				{
					printf(" Please Enter the Password To See Results : ");
					scanf("%d",&password);
					if(password == 1234)
					{
						printf("\n");
						printf(" Results of The Voting \n");
						printf("\n");
						printf(" Sudeep  got %d  Votes \n",sum1);
						printf(" Rakshit got %d Votes \n",sum2);
						printf(" Ganesh got %d Votes \n",sum3);
						printf(" Upendra got %d Votes \n",sum4);
						printf(" Rishab got %d Votes \n",sum5);
						if(sum1 > sum2 && sum1 > sum3 && sum1 > sum4 && sum1 > sum5)
						{
							printf("\n");
							printf(" Sudeep as Won the Elections \n");

						}
						else if(sum2 > sum3 && sum2 > sum4 && sum2 > sum5)
						{
							printf("\n");
							printf(" Rakshit as Won the Elections \n");
						}
						else if(sum3 > sum4 && sum3 > sum5 )
						{
							printf("\n");
							printf(" Ganesh as Won the Elections \n");
						}
						else if(sum4 > sum5 )
						{
							printf("\n");
							printf(" Upendra as Won the Elections \n");
						}
						else 
						{
							printf("\n");
							printf(" Rishab as won the Elections \n");
						
						}
					}
					else
					{
						printf(" You Have Entered The Worng Password \n");
					}
					break;
				}
			
			
		}
		if(choice == 7)
		{
			break;
		}
				
	}

}
