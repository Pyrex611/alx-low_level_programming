#include <stdio.h>

/**
 * main - prints out the letter of the alphabet
 * Return: 0
 */

int main(void)
{
	int letter_count;

	letter_count = 97;
	while(letter_count < 123)
	{
		putchar(letter_count);
		letter_count++;
	}
	putchar('\n');
	return ('0');
}
