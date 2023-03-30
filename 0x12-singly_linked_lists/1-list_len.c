#include <stddef.h>
#include "lists.h"

/**
 * list_len - to print lentgh
 * @h: nodes parameter
 * Return: returns total
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
