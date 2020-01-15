#include<stdio.h>
#include<stdbool.h>
int main()
{
	unsigned long num;
	unsigned long div;
	bool isPrime;

	printf("Please enter an integer for checking ");
	printf("(enter q to quit):");
	while ((scanf("%lu", &num)) == 1)
	{
		for (div = 2, isPrime = true; (div*div) <= num; div++)
		{
			if (num%div == 0)
			{
				if ((div*div) != 0)
				{
					printf("%lu %lu ", div, num / div);
				}
				else
				{
					printf("%lu.", div);
				}
				isPrime = false;
			}
		}//this part is to check the number isn't a prime
		printf("\n");
		if (isPrime)
		{
			printf("%lu is a prime.\n", num);
		}//this part's initial condition is isPrime=true
		
		printf("Please enter the next integer for checking ");
		printf("(enter q to quit):\n");
	}
	return 0;
}
