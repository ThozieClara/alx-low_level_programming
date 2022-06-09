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
int m;
for (m = 0, m < 10; m++)
{
	int bet;
	for (bet = 'a'; bet <= 'z'; bet++)
	{
			_putchar(bet);
	}
		_putchar('\n');
}
return (0);
}
