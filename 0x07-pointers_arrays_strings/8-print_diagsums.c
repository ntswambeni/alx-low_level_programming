#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array of content
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum_a = 0, sum_b = 0;

	for (i = 0; i < size; i++)
	{
		sum_a += *(a + (i * size) + i);
		sum_b += *(a + (i * size) + size - 1 - i);
	}
	printf("a: %d, b: %d", sum_a, sum_b);
}
