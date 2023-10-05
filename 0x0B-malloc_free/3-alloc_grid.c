#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - returns a pointer to a two dimensional array
 * @width: width of 2 dimensional array
 * @height: height of the array
 *
 * Return: pointer to array, NULL on error
 */
int **alloc_grid(int width, int height)
{
	int **array, i, j;

	if (width == 0 || height == 0)
		return (NULL);
	array = (int **)malloc(sizeof(int *) * height);

	if (array != NULL)
	{
		for (i = 0; i < height; i++)
		{
			array[i] = (int *)malloc(width * sizeof(int));
			if (array[i] == NULL)
			{
				for (i = 0; array[i] != NULL; i++)
				{
					free(array[i]);
				}
				free(array);
				return (NULL);
			}
		}
	}
	else
	{
		free(array);
		return (NULL);
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;
	return (array);
}
