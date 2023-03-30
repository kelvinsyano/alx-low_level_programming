#include "lists.h"

/**
 * free_list - freeig list in linked list
 * @head: head node pointer
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;

		free(current->str);
		free(current);
		current = next;
	}
}
