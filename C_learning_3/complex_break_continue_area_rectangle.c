#include<stdio.h>
int main()
{
	float length, width;

	printf("Enter the length of the rectangle(q to quit):\n");
	while ((scanf("%f", &length)) == 1)
	{
		if (length <= 0) 
		{
            printf("No valid value were entered!\n");
			printf("Please enter the length of the rectangle:\n");
			continue;
		}
		printf("Length=%0.2f:\n",length);
		printf("Enter its width(q to quit):\n");
		while (scanf("%f", &width) == 1)
	    {
			if (width <= 0)
			{
				printf("No valid value were entered!\n");
				printf("Please enter the width of the rectangle:\n");
				continue;//back to the while loop which contains it
			}
			else
			{
				printf("width=%0.2f\n", width);
				break;//jump out this while loop 
			}
		}
			
		printf("Area=%0.2f\n", length*width);
		printf("Enter the next length of the rectangle(q to quit):\n");
	}
	printf("Done");
	return 0;
}