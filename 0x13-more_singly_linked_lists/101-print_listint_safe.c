#include "lists.h"
size_t looped_listint_len(const listint_t *head);

/**
 * looped_listint_len - looping through the list
 * @head: point to head node
 *
 * Return: returns nodes or 0 otherwise
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *cont, *comp;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	cont = head->next;
	comp = head->next->next;
	while (comp)
	{
		if (cont == comp)
		{
			cont = head;
			while (cont != comp)
			{
				nodes++;
				cont = cont->next;
				comp = comp->next;
			}
			cont = cont->next;
			while (cont != comp)
			{
				nodes++;
				cont = cont->next;
			}
			return (nodes);
		}
			cont = cont->next;
			comp = comp->next->next;
	}
	return (0);
}

/**
 * print_listint_safe - print safe
 * @head: pointer to head node
 *
 * Return: returns nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

