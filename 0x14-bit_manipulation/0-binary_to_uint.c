#include <stdlib.h>

/**
 * binary_to_uint - converts a number from binary to unsg int
 * @b: string to conver
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, len, i, j, mult = 1;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		continue;

	i = len;
	while (i > 1)
	{
		if (b[len - i] != '0' && b[len - i] != '1')
			return (0);

		if (b[len - i] == '1')
		{
			for (j = 0; j < (i - 1); j++)
				mult *= 2;
			num += mult;
			mult = 1;
		}
		i--;
	}
	if (b[len - i] != '0' && b[len - i] != '1')
		return (0);
	if (b[len - i] == '1')
		num += 1;

	return (num);
}
