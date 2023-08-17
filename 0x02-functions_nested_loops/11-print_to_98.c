#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The initial number of the sequence
 */
void print_to_98(int n)
{
	for (n; n <= 98; n++)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
	}
	putchar('\n');
}
