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
	int i = 0, sizes1, sizes2;

	if (s1 == NULL)
		sizes1 = 0;
	else
		sizes1 = strlen(s1);
	if (s2 == NULL)
		sizes2 = 0;
	else
		sizes2 = strlen(s2);

	concatstr = (char *)malloc(sizeof(char) * sizes1 + sizes2 +1);

	if (concatstr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		auxstr = s1;
		while (*auxstr)
		{
			concatstr[i] = *auxstr;
			i++;
			auxstr++;
		}
	}
	auxstr = s2;

	if (auxstr != NULL)
	{
		while (*auxstr)
		{
			concatstr[i] = *auxstr;
			i++;
			auxstr++;
		}
	}
	concatstr[i] = '\0';
	return (concatstr);
}
