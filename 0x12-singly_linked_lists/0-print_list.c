#include "lists.h"

/**
 * print_list - prints all in linked list
 * @h: node
 * Return: returns total elements
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}
