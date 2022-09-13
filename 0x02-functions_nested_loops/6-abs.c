/**
 * _abs - computes the absolute value of an integer
 * @n: the integer whose value is to be computed
 *
 * Return: returns the absolute value of the integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
		return (n);
}
