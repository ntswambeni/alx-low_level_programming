#include <stdio.h>
#include "main.h"

/**
 * largest_prime - returns the largest prime number of 612852475143
 * Return: largest prime
 */
void largest_prime(void)
{
	long number = 612852475143, largest_prime = -1;
	int i;

	while (number % 2 == 0)
	{
		largest_prime = 2;
		number /= 2;
	}
	while (number % 3 == 0)
	{
		largest_prime = 3;
		number /= 3;
	}
	for (i = 5; i * i <= number; i += 6)
	{
		while (number % i == 0)
		{
			largest_prime = i;
			number /= i;
		}
		while (number % (i + 2) == 0)
		{
			largest_prime = i + 2;
			number /= (i + 2);
		}
	}
	if (number > 4)
		largest_prime = number;
	printf("%ld\n", largest_prime);
}

/**
 * main - entry point of the program
 * Return: 0
 */
int main(void)
{
	largest_prime();
	return (0);
}
