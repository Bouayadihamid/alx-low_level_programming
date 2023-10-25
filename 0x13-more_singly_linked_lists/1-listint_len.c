#include "lists.h"

/**
 * listint_len - return the nbr of a linked list
 * @h: is a ptr
 *
 * Return: return the nbr
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
