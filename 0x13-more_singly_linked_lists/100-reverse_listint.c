#include "lists.h"

/**
 * reverse_listint - reverse
 * @head: pointer to pointer head node
 *
 * Return: returns pointer to head
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current_node = *head;

	listint_t *next;

	while (current_node != NULL)
	{
		next = current_node->next;
		current_node->next = previous;
		previous = current_node;
		current_node = next;
	}
	*head = previous;
	return (*head);
}

