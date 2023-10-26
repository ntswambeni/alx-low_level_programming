#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string between strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	if (n == 0)
	{
		printf("\n");
		exit(0);
	}
	if (separator == NULL)
		separator = "";

	va_start(list, n);
	for (i = 0; i < (n - 1); i++)
	{
		s = va_arg(list, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s%s", s, separator);
	}
	s = va_arg(list, char *);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s\n", s);
	va_end(list);
}
