#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0-14
 * Return: return value is void
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				int k, num;

				for (k = 0; k < 2; k++)
				{
					if (k == 0)
					{
						num = j / 10;
					}
					else
					{
						num = j % 10;
					}
					_putchar(num + '0');
				}
			}
			else
			{
				_putchar(j + '0');
			}
		}
		_putchar('\n');
	}
}
