#include <stdlib.h>

/**
 * clear_bit - set the value of a bit to 0 at given index
 * @n: int to manipulate
 * @index: index to set
 * Return: 1 if worked, -1 if not
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int num = 1UL << index;

	if (n == NULL || index >= size)
		return (-1);
	*n &= ~num;
	return (1);
}
