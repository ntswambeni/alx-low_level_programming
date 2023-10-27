#include "main.h"
#include <stdlib.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8, i;
	unsigned long int num = (1UL << (size - 1));
	char print = '0';

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if ((print == '0') && (n & num))
				print = '1';
			if (print == '1')
			{
				if (n & num)
					_putchar('1');
				else
					_putchar('0');
			}
			n = n << 1;
		}
	}
}
