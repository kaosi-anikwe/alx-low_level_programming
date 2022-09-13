#include "main.h"
/**
 * print_alphabet - prints all lowercase letters
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
}

/**
 * print_alphabet_x10 - Prints the lowercase alphabets 10 times
 *
 * Return: return value is void
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print_alphabet();
		if (i == 8)
		{
			break;
		}
		_putchar('\n');
	}
}

