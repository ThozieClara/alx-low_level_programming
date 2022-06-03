#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - start program to print the last digit
 * Description: return condition
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	int last digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n"n, last digit);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and n t 0\n", n, last dgt);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, last digit);
	}

	return (0);
