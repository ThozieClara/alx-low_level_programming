#include "main.h"

/**
 * main - Prints alphabet in lowercase, followed by new line
 *
 * Return 0;
 *
*/
void print_alphabet(void);
{
int bet;

for (bet = 'a'; bet <= 'z'; bet++)
{
_putchar (bet);
_putchar ('\n');
}
return (0);
}
