#include <main.h>

/**
 * main - Prints alphabet in lowercase, followed by new line
 *
 * Return: always 0.
*/
int print_alphabet(void)
{
char bet;

for (bet = 'a'; bet <= 'z'; bet++)
{
putchar (bet);
putchar ('\n');
}
return (0);
}
