#include <unistd.h>
#include <string.h>

/**
 * main - this is the entry point for the program
 * Return: 1
 */

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, strlen(message));
	return (1);
}
