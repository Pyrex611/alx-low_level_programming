#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * , followed by a new line.
 * must be separated by comma, followed by a space
 * numbers should be displayed in same order as they are stored in the array
 * @n: the number of elements of the array to be printed
 * @a: the array
 * Return: void
 */

void print_array(int *a, int n)

{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
	
		if (i == n - 1)
		{
			break;
		}
		printf(", ");
		i++;
	}
	printf("\n");
}
