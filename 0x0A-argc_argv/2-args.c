#include <stdio.h>

/**
 * main - Entry point for the program
 * @argc: number of arguments in the program
 * @argv: array of strings/argument values
 * Return: exit value
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
