#include "lists.h"

/**
 * dlistint_len - prints the length of a doubly linked list
 * @h: the head node address
 *
 * Return: size of list
 * */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count  = 0;

	while (h)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
