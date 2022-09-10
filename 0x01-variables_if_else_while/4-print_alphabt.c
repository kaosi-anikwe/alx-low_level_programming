#include <stdio.h>
/**
* main - evaluates wheter a number is negative or positive
* @n - a randomly generated number to be checked
* Return: returns 0 after printing if negative or not
*/
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101)
		{
			i++;
		}
		else if (i == 113)
		{
			i++;
		}
		putchar((char) i);
	}


	putchar('\n');
	return (0);
}
