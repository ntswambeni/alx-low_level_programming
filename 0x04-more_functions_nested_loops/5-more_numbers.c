#include "main.h"

/**
 * more_numbers - print digits from 0 to 14
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j, tmp1, tmp2;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				tmp2 = i;
			}
			else
			{
				tmp1 = i / 10;
				tmp2 = i % 10;
				_putchar(tmp1 + '0');
			}
			_putchar(tmp2 + '0');
		}
		_putchar('\n');
	}
}
