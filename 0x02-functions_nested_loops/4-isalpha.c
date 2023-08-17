#include "main.h"
#include <regex.h>
#include <stddef.h>

/**
 * _isalpha - Checks if a character is letter or not
 * @c: The charater to test
 * Return: 1 if letter. 0 otherwise
 */
int _isalpha(int c)
{
	regex_t rx;
	int response;
	char str[2];

	str[0] = c;
	str[1] = '\0';

	regcomp(&rx, "[[:alpha:]]", 0);
	response = regexec(&rx, str, 0, NULL, 0);
	if (response == 0)
		return (1);
	return (0);
}
