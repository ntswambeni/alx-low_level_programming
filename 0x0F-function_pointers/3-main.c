#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: vector of arguments
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int (*func)(int, int), result;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	func = get_op_func(argv[2]);
	result = func(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);

	return (0);
}
