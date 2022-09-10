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

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i == 8 && j == 9)
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
	return (0);
}
