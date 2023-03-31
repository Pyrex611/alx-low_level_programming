#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates 2 strings
 * @dest: first string
 * @src: the second string
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)

{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
		j++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
