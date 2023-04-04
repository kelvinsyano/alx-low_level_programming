#include "lists.h"

/**
 * pop_listint - pop nodes
 * @head: pointer to pointer node
 *
 * Return: return node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_data;

	if (*head == NULL)
		return (0);
	node_data = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (node_data);
}

