#include "lists.h"

/**
 * listint_len - number elements
 * @h: a pointer to head
 *
 * Return: returns node
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		node++;
		h = h->next;
	}
	return (node);
}
