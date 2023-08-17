#include "main.h"
#include <regex.h>
#include <stddef.h>

/**
 * _islower - Checks if a character is lowercase or not
 * @c: The charater to test
 * Return: 1 if lowercase. 0 otherwise
 */
int _islower(int c)
{
	regex_t rx;
	int response;
	char str[2];

	str[0] = c;
	str[1] = '\0';

	regcomp(&rx, "[a-z]", 0);
	response = regexec(&rx, str, 0, NULL, 0);
	if (response == 0)
		return (1);
	return (0);
}
