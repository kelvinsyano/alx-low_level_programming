#include "lists.h"

/**
 * delete_nodeint_at_index - delete node
 * @head: pointer to pointer node
 * @index: index
 *
 * Return: returns 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *prev_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	current_node = *head;
	prev_node = NULL;

	for (i = 0; i < index && current_node != NULL; i++)
	{
		prev_node = current_node;
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (-1);
	prev_node->next = current_node->next;
	free(current_node);
	return (1);
}

