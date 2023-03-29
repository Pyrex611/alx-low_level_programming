#include "main.h"

/**
 * _atoi - converts a string into an integer
 * @s: the string
 * Return: 0
 */

int _atoi(char *s)

{
	int has_digits = 0;
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
	sign = -1;
	s++;
	}
	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
			has_digits = 1;
			result = result * 10 + (*s - '0');
		}
		s++;
	}
	if (!has_digits)
		result = 0;

	return (sign * result);

}
