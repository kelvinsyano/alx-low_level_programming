#include "lists.h"

/**
 * add_nodeint_end - add node at end
 * @head: head
 * @n: number
 *
 * Return: returns new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node1, *temp_node1;

	new_node1 = malloc(sizeof(listint_t));

	if (new_node1 == NULL)
		return (NULL);
	new_node1->n = n;
	new_node1->next = NULL;

	if (*head == NULL)
		*head = new_node1;

	else
	{
		temp_node1 = *head;
		while (temp_node1->next != NULL)
			temp_node1 = temp_node1->next;
		temp_node1->next = new_node1;
	}
	return (new_node1);
}
