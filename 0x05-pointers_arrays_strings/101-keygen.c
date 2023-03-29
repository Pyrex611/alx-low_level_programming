#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 * Return: 0
 */

#define PASSWORD_LENGTH 8
#define VALID_CHARS "abcdefghijklmnopqrstuvwxyz0123456789"

int main(void)

{
	srand(time(NULL));

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)

	{
		password[i] = VALID_CHARS[rand() % (sizeof(VALID_CHARS) - 1)];
	}
	password[PASSWORD_LENGTH] = '\0';

	printf("%s\n", password);

	return (0);
}
