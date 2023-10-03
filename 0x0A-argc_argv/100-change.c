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
	int amountofcoins = 0, remainder;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	remainder = atoi(argv[1]);
	if (remainder >= 25)
	{
		amountofcoins += remainder / 25;
		remainder %= 25;
	}
	if (remainder >= 10)
	{
		amountofcoins += remainder / 10;
		remainder %= 10;
	}
	if (remainder >= 5)
	{
		amountofcoins += remainder / 5;
		remainder %= 5;
	}
	if (remainder >= 2)
	{
		amountofcoins += remainder / 2;
		remainder %= 2;
	}
	amountofcoins += remainder;
	printf("%d\n", amountofcoins);
	return (0);

}
