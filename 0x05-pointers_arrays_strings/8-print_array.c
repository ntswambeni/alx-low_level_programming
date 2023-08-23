#include "main.h"
#include <stdio.h>

/**
 * print_array - prints half of a string followed by a new line
 * @a: array of numbers
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		if (i < n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i", a[i]);
	}
	printf("\n");
}
