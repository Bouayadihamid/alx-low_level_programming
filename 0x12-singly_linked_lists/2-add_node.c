#include "lists.h"

/**
 * add_node - add a node
 * @head: address of ptr
 * @str: string
 *
 * Return: size of list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_h = malloc(sizeof(list_t));

	if (!head || !new_h)
		return (NULL);
	if (str)
	{
		new_h->str = strdup(str);
		if (!new_h->str)
		{
			free(new_h);
			return (NULL);
		}
		new_h->len = _strlen(new_h->str);
	}
	new_h->next = *head;
	*head = new_h;
	return (new_h);
}
