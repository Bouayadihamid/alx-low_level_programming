#include "lists.h"

/**
 * free_listint - frees a list
 * @head: ptr
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
