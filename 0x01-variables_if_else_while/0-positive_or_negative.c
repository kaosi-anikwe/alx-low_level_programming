#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - evaluates wheter a number is negative or positive 
* @n - a randomly generated number to be checked 
* Return - returns 0 after printing if negative or not
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    if (n == 0)
    {
        printf("%d is zero\n", n);
    } else if (n > 0)
    {
        printf("%d is positive\n", n);
    } else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
	return (0);
}