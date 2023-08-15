#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char d = 'A';

	do {
		putchar(c);
		c++;
	} while (c <= 'z');
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}
