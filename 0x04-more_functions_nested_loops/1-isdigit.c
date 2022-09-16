#include "main.h"
/**
 * _isdigit - checks for a digit 0-9
 * @c: the character to be checked
 *
 * Return: 1 if digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
