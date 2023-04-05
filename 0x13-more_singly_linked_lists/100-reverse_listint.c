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
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = (*head);
		*head = next;
	}
	*head = previous;
	return (*head);
}

