#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: the array to reverse
 * @n: number of elements in an array
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;

	for (i = 0; i < (n / 2); i++)
	{
		aux = a[i];
		a[i] = a[(n - i) - 1];
		a[(n - i) - 1] = aux;
	}
}
