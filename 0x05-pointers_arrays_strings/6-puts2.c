#include "main.h"

/**
 * puts2 - prints 1 skips 1 in a string
 * @str: the string used
 * Return: 0
 */

void puts2(char *str)

{
	int it = 0;

	while (str[it])
	{
		if (it % 2 == 0)
		{
			_putchar(str[it]);
		}
		it++;
	}
	_putchar('\n');
}
