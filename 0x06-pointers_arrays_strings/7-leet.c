#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @s: pointer to string.
 *
 * Returns: pointer to s
 */

char *leet(char *s)

{
	int l, i;
	char leetLetters[] = "aAeEoOtTlL";
	char leetNums[] = "4433007711";

	l = 0;
	while (s[l] != '\0')
	{
		i = 0;
		while (i < 10)
		{
			if (leetLetters[i] == s[l])
			{
				s[l] = leetNums[i];
			}
			i++;
		}
		l++;
	}
	return (s);
}
