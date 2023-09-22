#include <stdlib.h>

/**
  * _strdup - returns a pointer to a newly allocated space in memory
  * which cotains a copy of the string given as parameter
  * @str: string to copy
  *
  * Return: pointer to the address of the copy of the string
  */
char *_strdup(char *str)
{
	char *strcp;
	int i;

	if (str == NULL)
		return (NULL);

	strcp = malloc(sizeof(str));

	if (strcp != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			strcp[i] = str[i];
		}
	}

	return (strcp);
}
