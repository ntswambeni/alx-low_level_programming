#include "main.h"

/**
 * is_prime_number - return if a number is prime or not
 * @n: number to test
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 0)
		n = -n;
	if (n <= 1)
		return (0);
	return (the_prime(2, n));
}

/**
 * the_prime - tests if a number is prime
 * @m: controler
 * @n: number to test
 * Return: 1 if prime, 0 if not
 */
int the_prime(int m, int n)
{
	if (n == m)
		return (1);
	if (n != m && n % m == 0)
		return (0);

	return (the_prime(m + 1, n));
}
