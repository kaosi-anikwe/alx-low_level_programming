#include <stdio.h>
/**
* main - evaluates wheter a number is negative or positive
* @n - a randomly generated number to be checked
* Return: returns 0 after printing if negative or not
*/
int main(void)
{
	int i;
	int j;
	int k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				if (j > i)
				{
					if (k > j)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(k + '0');
					if (i == 7 && j == 8 && k == 9)
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
