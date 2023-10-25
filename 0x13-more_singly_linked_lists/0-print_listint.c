#include "lists.h"

/**
 * print_listint - prints a list of int
 * @h: pointer
 *
 * Return: the nbr of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i)
}
