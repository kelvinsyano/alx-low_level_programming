#include "lists.h"

/**
 * sum_listint - find sum
 * @head: pointer to head node
 *
 * Return: returns sum
 */


int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
