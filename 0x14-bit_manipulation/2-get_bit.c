#include <stdio.h>

/**
 * get_bit - returns a bit at a given index
 * @n: number to search
 * @index: index of the bit
 * Return: index, -1 if not found
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num = 1UL;
	unsigned long int size = (sizeof(unsigned long int) * 8);

	if (index > size)
		return (-1);
	num = num << (index);
	if (num & n)
		return (1);
	else
		return (0);
}
