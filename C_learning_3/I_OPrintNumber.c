/*Given an integer which is bigger than zero,
degisn a program which gives singel number.
e.g.:
Input:1245
Output:1 2 4 5
to output 1245 we should firstly print 124 and
then 5. The second step is easy to achieve through
PrintDigit(1245%10),so we can let value=N/10,and 
then int Value%10. By this way we can get the number.
*/
#include<stdio.h>

void PrintOut(int number);
void PrintDigit(int number);
void PreDispose(int number); 


int main(void)
{
	int n = -45689;

	PreDispose(n);

	return 0;
}

void PreDispose(int number)
{
	if (number < 0)
	{
		putchar('-');
		number = -number;
	}

	PrintOut(number);
}

void PrintOut(int number)
{
	int value = number / 10;

	if (value != 0)
		PrintOut(value);

	PrintDigit(number % 10);
}

void PrintDigit(int number)
{
	printf("%d", number);
}