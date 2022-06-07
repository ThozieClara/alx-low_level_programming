/*
 * File: 1-alphabet.c
 */

#include "mai.h"

/**
 * print_alphabet - prints the alphabet in lowercase.
 */
void print_alphabet(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
		_putchar(bet);

	_putchar('\n');
return (0);
}
