#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all letters of the alphabet except 'c' and 'x'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q' || letter == 'e')
		{
			letter++;
			continue;
		}
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
