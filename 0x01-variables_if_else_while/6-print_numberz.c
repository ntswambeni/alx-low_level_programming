#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Return: 0
 */
int main(void)
{
	short i;

	for (i = 0; i < 10; i++)
	{
		putchar(i+'0');
	}
	putchar('\n');
	return (0);
}
