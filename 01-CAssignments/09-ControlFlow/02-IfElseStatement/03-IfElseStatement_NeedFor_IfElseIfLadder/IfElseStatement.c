#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	//variable declarations
	int num_mk;
	
	//code
	printf("\n\n");

	printf("Enter Value For 'num_mk' : ");
	scanf("%d", &num_mk);

	if(num_mk < 0) //'if' - 01
	{
		printf("Num_mk = %d Is Less Than 0 (NEGATIVE) !!!\n\n", num_mk);
	}
	else // 'else' -01
	{
		if((num_mk > 0) && (num_mk <=100)) // 'if' - 02
		{
			printf("Num_mk = %d Is Between 0 And 100 !!!\n\n", num_mk);
		}
		else // 'else' - 02
		{
			if((num_mk > 100) && (num_mk <= 200)) // 'if' -03
			{
				printf("Num_mk = %d Is Between 100 and 200 !!!\n\n", num_mk);
			}
			else // 'else' - 03
			{
				if((num_mk > 200) && (num_mk <= 300)) // 'if' -04
				{
					printf("Num_mk = %d Is Between 200 and 300 !!!\n\n", num_mk);
				}
				else // 'else' - 04
				{
					if((num_mk > 300) && (num_mk <= 400)) // 'if' - 05
					{
						printf("Num_mk = %d Is between 300 and 400 !!!\n\n", num_mk);
					}
					else //'else' - 05
					{
						if((num_mk > 400) && (num_mk <= 500)) //'if' - 06
						{
							printf("Num_mk = %d is between 400 and 500 !!!\n\n", num_mk);
						}
						else // 'else' -06
						{
							printf("Num_mk = %d Is Greater Than 500 !!!\n\n", num_mk);
						} // closing brace of 'else' - 06
					} // closing brace of 'else' - 05 
				} //closing brace of  'else' - 04
			} //closing brace of 'else' -03
		}//closing brace of 'else -02
	}//closing brace of 'else' -01
	exit(EXIT_SUCCESS);
}
