#include "main.h"

/**
 * puts_half - prints the second half of the string.
 * @str: the string
 * Return: void
 */

void puts_half(char *str)

{
	int n = 0, halfn, i;

	while (str[n])
		n++;

	if (n % 2 == 0)
	{
		halfn = n / 2;
	}
	else
	{
		halfn = (n - 1) / 2;
	}
	for (i = halfn; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
