#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: the string
 * Return: the capitalized string
 */

char *cap_string(char *s)

{
	int l;

	i = 0;

	while (s[l] != '\0')
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}

		if (s[l] == ' ' || s[l] == '\t' || s[l] == '\n'
		|| s[l] == ',' || s[l] == ';' || s[l] == '.'
		|| s[l] == '.' || s[l] == '!' || s[l] == '?'
		|| s[l] == '"' || s[l] == '(' || s[l] == ')'
		|| s[l] == '{' || s[l] == '}')
		{
			if (s[l + 1] >= 97 && s[l + 1] <= 122)
			{
				s[l + 1] = s[l + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}

