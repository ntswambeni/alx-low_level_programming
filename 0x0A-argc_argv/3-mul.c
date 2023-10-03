#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * @argc: number of arguments in the program
 * @argv: array of strings/argument values
 * Return: exit value
 */
int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	print("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
