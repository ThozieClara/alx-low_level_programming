#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase, followed by new line
 *
 * Return 0;
 *
*/
void print_alphabet(void)
{
char bet;

for (bet = 'a'; bet <= 'z'; bet++)
{
_putchar (bet);
_putchar ('\n');
}
return (0);
}
