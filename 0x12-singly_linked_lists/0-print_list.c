#include <stdio.h>

/**
 * print_list - prints all elements of list_t
 * @h: pointer to list_t element
 * Return: number of nodes
 */
 size_t list_len(const list_t *h)
{
	list_t current = h;
	int counter = 0;

	while(current)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		counter++;
	}
	return (counter);
}
