#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: first string
 * @s2: second string.
 * Return: 0 if equal, negative if s2 is greater and positive if s1 is greater
 */

int _strcmp(char *s1, char *s2)

{
	int i, j;

	for (i = 0; s1[i] == s2[i] && s1[i] != '\0'; i++)
	{
		;
	}
	j = s1[i] - s2[i];
	return (j);
}
