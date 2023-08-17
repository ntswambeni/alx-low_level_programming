#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int i, j, tmp, tmp2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			tmp = i * j;
			if (tmp < 10)
			{
				_putchar(' ');
				_putchar(tmp + '0');
			}
			else
			{
				tmp2 = tmp % 10;
				tmp = tmp / 10;
				_putchar(tmp + '0');
				_putchar(tmp2 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
