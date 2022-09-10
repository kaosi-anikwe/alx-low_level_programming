#include <stdio.h>
/**
* main - evaluates wheter a number is negative or positive
* @n - a randomly generated number to checked
* Return: returns 0 after printing if negative or not
*/
int main(void)
{
	int i, j, k, l, op1, op2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					op1 = (i * 10) + j;
					op2 = (k * 10) + l;
					if (op1 < op2)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(k + '0');
						putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
						break;
						putchar(',');
						putchar(' ');
					}

				}
			}
		}
	}
	putchar('\n');
	return (0);
}
