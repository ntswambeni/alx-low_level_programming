#include "main.h"
#include <string.h>

/**
 * is_palindrome - return if a string is a palindrome or not
 * @s: String to test
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;
	int head, tail;

	len = strlen(s);
	head = 0;
	tail = len - 1;
	if (*s == '\0' || len == 1)
		return (1);

	return (the_palindrome(s, head, tail));
}

/**
 * the_palindrome - tests if a string is a palindrome
 * @s: string to test
 * @head: character from left to right
 * @tail: character from right to left
 * Return: 1 if palindrome, 0 if not
 */
int the_palindrome(char *s, int head, int tail)
{
	if (head >= tail)
		return (1);

	if (s[head] != s[tail])
		return (0);

	return (the_palindrome(s, head + 1, tail - 1));
}
