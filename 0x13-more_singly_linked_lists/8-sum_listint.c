#include "lists.h"
#include <stddef.h>

/**
 * sum_listint - return sum of all data n
 * @head: ptr
 * Return: sum of data n
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	if (!head)
	{
		return (0);
	}
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
