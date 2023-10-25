#include <stdlib.h>

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array.
 * @array: array to manipulate
 * @size: size of the array
 * @action: function to perform
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL)
		exit(0);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
