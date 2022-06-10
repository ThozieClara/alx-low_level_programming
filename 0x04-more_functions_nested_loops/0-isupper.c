#include "main.h"
#include <stdio.h>
/**
 * _isupper - Checks for uppercase characters.
 *
 * Description: check for uppercharacters and character c
 *
 * Return: 1 if character is uppercase, 0 otherwise.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
