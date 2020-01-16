#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;

	printf("Give me an letter of alphabet and I will give");
	printf("an animal name\n belonging with the letter.\n");
	printf("Please type an letter(# to end)\n");

	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower(ch))	
			switch (ch)
			{
			case 'a':
				printf("argali,a wild sheep of Asian.\n");
				break;
			case 'b':
				printf("babirusa, a wild pig of Malay.\n");
				break;
			case 'c':
				printf("coati,racoonlike mammal.\n");
				break;
			case 'd':
				printf("desman,aquatic,molelike critter.\n ");
				break;
			case 'e':
				printf("echidn, the spiny anteater.\n");
				break;
			default:
				printf("That's a stumper!\n");
			}
		else
		{
			printf("I recognize only lowercase letters.\n");
		}
		while (getchar() != '\n')
			continue;
		printf("Please type another letter or a #.\n");
	}
	printf("Bye!\n");

	return 0;
}