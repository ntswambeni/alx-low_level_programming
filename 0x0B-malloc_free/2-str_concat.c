#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *concatstr, *auxstr;
	int i = 0;
	
	auxstr = s1;
	concatstr = (char *)malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (concatstr == NULL)
		return (NULL);

	if (s1 != NULL)
		while (*auxstr)
		{
			concatstr[i] = *auxstr;
			i++;
			auxstr++;
		}

	auxstr = s2;

	if (auxstr == NULL)
	{
		concatstr[i] = '\0';
	}
	else
	{
		while (*auxstr)
		{
			concatstr[i] = *auxstr;
			i++;
			auxstr++;
		}
		concatstr[i] = '\0';
	}

	return (concatstr);
}
