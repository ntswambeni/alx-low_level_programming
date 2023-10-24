#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first n characters of s2
 * Return: pointer to a new allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (sizeof(s2) - 1 < n)
		n = (unsigned int)sizeof(s2) - 1;

	p = malloc((unsigned int)sizeof(s1) + n);

	if (p == NULL)
		return (NULL);

	for (; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}

	for (; s2[j] != '\0' && j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';

	return (p);
}
