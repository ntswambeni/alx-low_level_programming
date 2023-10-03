#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Entry point for the program
 * @argc: number of arguments in the program
 * @argv: array of strings/argument values
 * Return: exit value
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *aux;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		aux = argv[i];
		while (*aux != '\0')
		{
			if (!isdigit(*aux))
			{
				printf("Error\n");
				return (1);
			}
			aux++;
		}

		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
