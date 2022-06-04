#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except for q and e.
 *
 * Return: Always 0
 */
int main(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		if (bet != 'e' && bet != 'q')
			putchar(bet);
	}

	putchar('\n');

	return (0);
}
