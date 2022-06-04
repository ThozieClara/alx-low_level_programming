#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0
 */
int main(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
		putchar(bet);

	putchar('\n');

	return (0);
}
