#include <stdio.h>
void print_numbers(void);
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	print_numbers();
	return (0);
}

/**
 * print_numbers - prints the sum of multiples of 3 and 5 less than 1024
 *
 * Return: the sum of multiples
 */
void print_numbers(void)
{
	unsigned int i;
	unsigned int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
		else if (i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
}