#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_trings- prints strings followed by a new line
 * @separator: string between strings
 * @n: number of strings
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

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
		printf("%s%s", va_arg(list, char *) ? va_arg(list, char *) : "(nil)", separator);
	}
	printf("%s\n", va_arg(list, char *));
	va_end(list);
}
