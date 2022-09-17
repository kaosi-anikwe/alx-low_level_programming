#include<stdio.h>
#include<math.h>
int getMaxPrimeFactor(long int n);
/**
 * main - Entry point
 * Return: always 0
 */
int main(void)
{
	long int n;

	n = 612852475143;

	printf("%d\n", getMaxPrimeFactor(n));
	return (0);
}
/**
 * getMaxPrimeFactor - prints the highest prime factor of a number
 * @n: the integer to be printed
 *
 * Return: the highest prime factor of the number
 */
int getMaxPrimeFactor(long int n)
{
	int i, max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}
	if (n > 2)
	{
		max = n;
	}
	return (max);
}
