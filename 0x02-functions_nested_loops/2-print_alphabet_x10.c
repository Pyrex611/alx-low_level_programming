#include "main.h"

/**
 * print_alphabet_x10 - write alphabets from a -z x10 times
 * Return - void
 */

void print_alphabet_x10(void)
{

	char myAlph;

	int i = 0;

	while (i < 10)
	{
	for (myAlph = 'a';  myAlph <= 'z'; myAlph++)
	{
		_putchar(myAlph);
	}
	_putchar('\n');
	i++;
	}


}
