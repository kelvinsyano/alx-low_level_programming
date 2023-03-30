#include "lists.h"
#include <string.h>

/**
 * add_node - used to add node in linked list
 * @head: pointer to pointer to the heead of the list
 * @str: to be added to the next node
 *
 * Return: addresss of new ode
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (head == NULL || str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
