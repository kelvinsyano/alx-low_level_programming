#include "lists.h"

/**
 * add_nodeint - adds new node
 * @head: head of node
 * @n: number
 *
 * Return: retune new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node1 = malloc(sizeof(listint_t));

	if (new_node1 == NULL)
		return (NULL);
	new_node1->n = n;
	new_node1->next = *head;
	*head = new_node1;
	return (new_node1);
}

