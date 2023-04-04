#include "lists.h"

/**
 * get_nodeint_at_index - number at certain node
 * @head: pointer to node
 * @index: index
 *
 * Return: returns null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int node = 0;

	while (current_node != NULL)
	{
		if (node == index)
			return (current_node);
		node++;
		current_node = current_node->next;
	}
	return (NULL);
}

