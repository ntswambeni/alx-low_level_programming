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
			if (j > 0 && tmp < 10)
			{
				_putchar(' ');
			}
			else if (tmp >= 10)
			{
				tmp2 = tmp / 10;
				tmp = tmp % 10;
				_putchar(tmp2 + '0');
			}
			_putchar(tmp + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
