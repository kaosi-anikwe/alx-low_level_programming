/**
 * _isalpha - Checks if a character is uppercase
 * @c: character to be checked
 *
 * Return: returns 1 if uppercase else 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
