#include "main.h"

/**
 * _sqrt_recursion - return square root of n
 * @n: number to return square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (the_sqrt(2, n));
}

/**
 * the_sqrt - calculates the square root of a number
 * @m: controler
 * @n: n to calculate
 * Return: Square root of the n
 */
int the_sqrt(int m, int n)
{
	if (m * m == n)
		return (m);

	if (m * m > n)
		return (-1);

	return (the_sqrt(m + 1, n));
}
