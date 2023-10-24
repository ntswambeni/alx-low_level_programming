#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: smallest element in the array
 * @max: largest element in the array
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		p[i - min] = i;
	}

	return (p);

}
