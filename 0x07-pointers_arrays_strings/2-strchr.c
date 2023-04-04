#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: the string to ne searched.
 * @c: the characer to be located
 *
 * Return: a pointer to the first occurence if c is found and NULL if not
 */

char *_strchr(char *s, char c)

{
	int i = 0;
	
	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return ('\0');
}
