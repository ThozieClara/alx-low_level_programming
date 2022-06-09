#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 * Description: prints alphabet 10 times
 *
 * Return: always 0.
*/
void print_alphabet_x10(void)
{
int count = 0;
char bet;

        while (count++ <= 9)
        {
                for (bet = 'a'; bet <= 'z'; bet++)
                        _putchar(bet);
        }
                _putchar('\n');
}
