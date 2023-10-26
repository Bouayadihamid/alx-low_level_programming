#include "lists.h"
#include "stddef.h"

/**
 * insert_nodeint_at_index - inserts new node in a specific position
 * @head: ptr
 * @idx: index to inserted node
 * @n: data of the new node
 * Return: the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current = *head;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (i != idx - 1 || !current)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	current->next = new_node;
	return (new_node);
}
