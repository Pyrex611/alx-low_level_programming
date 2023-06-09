#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination array
 * @src: source array
 * @n: most bytes to be used from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
		;

	dest[i] = '\0';

	return (dest);
}
