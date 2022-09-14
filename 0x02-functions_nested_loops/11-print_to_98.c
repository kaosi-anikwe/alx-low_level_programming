#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from input number to 98
 * @n: input number used as reference for printing
 *
 * Return: return value is void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	else
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
