#include<stdio.h>

void main() 
{
	int count;
	int password;
	int max_attempts = 3;
	int correct_password = 1234;

	while(1)
	{
		for(count = 0;count < 3; count++);
		{
        		printf("Enter the password : ");
        		scanf("%d", &password);

			if(password == correct_password )
				{
					printf("Successfully logged in!\n");
					break;
				}
			else
				{
					printf("Incorrect password. You have %d attempts left.\n", --max_attempts);
				if(max_attempts == 0)
					{
						printf(" Try Again After 24 hours \n");
						break;
					}	
				}
			
		}
		
		
        }
}
