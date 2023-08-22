#include "main.h"

/**
 * swap_int - swaps values of two ints
 * @a: first int
 * @b: second int
 */
void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
