#include <stdio.h>
/**
* main - evaluates wheter a number is negative or positive
* @n - a randomly generated number to be checked
* Return: returns 0 after printing if negative or not
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					if (i <= k && j < l)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
					if (k >= i && l > j)
					{
						putchar(k + '0');
						putchar(l + '0');
					}
					if (i == 9 && j == 8 && k == 9 && l == 9)
					{
						putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}

				}
			}
		}
	}
	return (0);
}
