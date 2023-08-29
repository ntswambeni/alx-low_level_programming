#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer that will receive char
 * @to: char to set to pointer
 */
void set_string(char **s, char *to)
{
	*s = to;
}
