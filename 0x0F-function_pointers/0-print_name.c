#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function used to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(0);
	f(name);
}
