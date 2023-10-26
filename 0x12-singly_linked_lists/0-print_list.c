#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: pointer to list_t element
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%lu] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}
	return (counter);
}
