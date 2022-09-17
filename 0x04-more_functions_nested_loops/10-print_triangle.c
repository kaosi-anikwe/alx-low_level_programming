#include "main.h"
/**
 * print_triangle - prints a triangle in the terminal
 * @size: the size of the triangle
 *
 * Return: the return value is void
 */
void print_triangle(int size)
{
	int length, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (length = 1; length <= size; length++)
	{
		for (spaces = size - length; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (hashes = 1; hashes <= length; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
