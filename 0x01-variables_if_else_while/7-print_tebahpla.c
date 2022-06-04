#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse.
 *
 * Return: Always 0
 */
int main(void)
{
	char bet;

	for (bet = 'z'; bet >= 'a'; bet--)
		putchar(bet);

	putchar('\n');

	return (0);
}
