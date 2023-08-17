#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: The number
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{	
		last = n % 10;
	}
	else
	{
		last = n % 10;
		last = -last;
	}	
	_putchar(last + '0');
	return (last);
}
