#include "lists.h"

/**
 * print_dlistinct- prints doubly linked list
 * @h: the head node address
 *
 * Return: size of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count  = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
