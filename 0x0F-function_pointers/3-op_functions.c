#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sums two ints
 * @a: first int
 * @b: second int
 * Return: result of operation
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two ints
 * @a: first int
 * @b: second int
 * Return: result of operation
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two ints
 * @a: first int
 * @b: second int
 * Return: result of operation
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two ints
 * @a: first int
 * @b: second int
 * Return: result of operation
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calcs the remainder of a division
 * @a: first int
 * @b: second int
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
