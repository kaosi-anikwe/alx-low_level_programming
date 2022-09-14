#include "main.h"
/**
 * times_table - Prints the 9 times table starting from 0
 *
 * Return: return value is void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int n = i * j;

			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			} else
			{
				if (j > 0)
				{
					_putchar(' ');
				}
				_putchar(n + '0');
			}

			if (j == 9)
				break;

			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
