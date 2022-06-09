#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 *
 * Description: prints alphabet in lowercase
 *
 * Return: 0 is successful
 */
void print_alphabet(void)
{
int bet;

for (bet = 'a'; bet <= 'z'; bet++);
{
_putchar(bet);

_putchar('\n');
}
return (0);
}
