#include <stdio.h>
/**
* main - evaluates wheter a number is negative or positive
* @n - a randomly generated number to be checked
* Return: returns 0 after printing if negative or not
*/
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(',');
			putchar(' ');
		}	
	}
	putchar('\n');
	return (0);
}
