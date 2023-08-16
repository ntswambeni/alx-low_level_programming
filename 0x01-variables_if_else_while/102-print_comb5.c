#include <stdio.h>

/**
 * main - This is the entry point of the program
 * Return: 0
 */
int main(void)
{
	short i;
	short j;
	short k;
	short l;

	for (i = 0; i < 10; i++)
		for (j = 0; i == 9 ? j < 9 : j < 10; j++)
			for (k = i; k < 10; k++)
			{
				if (i == k)
					l = j + 1;
				else
					l = 0;
				for (; l < 10; l++)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if ((i < 9) || (j < 8))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');
	return (0);
}
