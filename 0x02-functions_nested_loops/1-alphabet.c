#include "main.h"

/**
 * main - Prints alphabet in lowercase, followed by new line
 *
 * Return 0;
 *
*/

void print_alphabet(void);
{

	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
