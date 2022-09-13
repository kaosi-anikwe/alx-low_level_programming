#include <stdio.h>
/**
* main - calls the print_alphabet function
* 
* Return: returns 0 after print_alphabet function returns
*/
void print_alphabet(void);

int main(void)
{
    print_alphabet();
    return 0;
}

/**
 * print_alphabet - prints all lowercase letters
 */
void print_alphabet(void)
{
    char i;

    for (i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return;
}