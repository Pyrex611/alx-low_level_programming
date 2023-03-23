#include "main.h"

/**
 * main - Checks if c is a character or not.
 *@c: The character to check.
 * Return: Returns 1 if a letter and 0 if not.
 */
int _isalpha(int c)

{
	if (c >= 65 && c <=122)
	{

	return (1);
	}
	return (0);
}
