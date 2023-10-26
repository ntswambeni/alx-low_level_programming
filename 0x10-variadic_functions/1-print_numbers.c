#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string between numbers
 * @n: number of ints
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	if (n == 0)
		exit(0);
	if (separator == NULL)
	{
		printf("");
		separator = "";
	}

	va_start(list, n);
	for (i = 0; i < (n - 1); i++)
	{
		printf("%d%s", va_arg(list, int), separator);
	}
	printf("%d\n", va_arg(list, int));
	va_end(list);
}
