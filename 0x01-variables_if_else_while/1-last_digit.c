#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - evaluates wheter a number is negative or positive
* @n - a randomly generated number to be checked
* Return: returns 0 after printing if negative or not
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last_digit > 5)
	{
		char text[] = "greater than 5";

		printf("Last digit of %d is %d and is %s\n", n, last_digit, text);

	} else if (last_digit == 0)
	{
		char text[] = "0";

		printf("Last digit of %d is %d and is %s\n", n, last_digit, text);

	} else if (last_digit < 6 && last_digit != 0)
	{
		char text[] = "less than 6 and not 0";

		printf("Last digit of %d is %d and is %s\n", n, last_digit, text);

	}

	return (0);
}
