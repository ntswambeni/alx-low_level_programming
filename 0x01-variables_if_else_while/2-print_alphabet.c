#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	
	do {
		putchar(c);
		putchar('\n');
		c++;
	} while (c <= 'z');
	return (0);
}
