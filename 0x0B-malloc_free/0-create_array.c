#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * and initializes with a specific char
 * @size: size of the array
 * @c: value to initialize the array
 *
 * Return: NULL if size == 0, array of chars if not
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);


	arr = malloc(sizeof(char) * size);

	if (arr != NULL)
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}

	return (arr);
}
