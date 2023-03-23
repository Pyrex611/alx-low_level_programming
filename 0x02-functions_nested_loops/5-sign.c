#include "main.h"

/**
 * print_sign - prints the sign of the number.
 *@n: te number we will check
 * Return: 1 for positive, -1 for negative and 0 for anyting else.
 */

int print_sign(int n)

{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
