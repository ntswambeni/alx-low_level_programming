#include "main.h"

/**
 * print_triangle - prints a triangle of size defined by param
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (j = 1; j <= size; j++)
		{
			for (i = 0; i < size - j; i++)
				_putchar(' ');
			for (i = 0; i < j; i++)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
