#include "lists.h"
/**
 * print_listint - print elements in the funct
 * @h: parameter
 *
 * Return: returns node
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tem = h;
	size_t node = 0;

	while (tem)
	{
		printf("%d\n", tem->n);
		tem = tem->next;
		node++;
	}
	return (node);
}
