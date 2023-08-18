#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The initial number of the sequence
 */
void print_to_98(int n)
{
	int i,abs, tmp1, tmp2, tmp3;

	for (i = n; n <= 98 ? i <= 98 : i >= 98; n <= 98 ? i++ : i--)
	{
		if (i < 0)
		{
			abs = -i;
			_putchar('-');
		}
		else
		{
			abs = i;
		}
		if (abs > 99)
		{
			tmp3 = abs % 10;
			tmp2 = abs / 10;
			tmp2 = tmp2 % 10;
			tmp1 = abs / 100;
			_putchar(tmp1 + '0');
			_putchar(tmp2 + '0');
		}
		else if (abs > 9)
		{
			tmp2 = abs / 10;
			tmp3 = abs % 10;
			_putchar(tmp2 + '0');
		}
		else
		{
			tmp3 = abs;
		}
		_putchar(tmp3 + '0');
		if (n < 98)
		{
			if (i < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		else
		{
			if (i > 98)
			{
				_putchar(',');
				_putchar(' ');	
			}
		}
	}
	_putchar('\n');
}
