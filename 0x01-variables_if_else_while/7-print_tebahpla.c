#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	do {
		putchar(c);
		c--;
	} while (c >= 'a');
	putchar('\n');
	return (0);
}
