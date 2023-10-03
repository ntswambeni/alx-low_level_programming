#include <stdio.h>

/**
 * main - Entry point for the program
 * @argc: number of arguments in the program
 * @argv: array of strings/argument values
 * Return: exit value
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
