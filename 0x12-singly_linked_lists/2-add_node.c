#include "lists.h"

/**
 * add_node - add node
 * @h: head of the list
 * @str: the content
 * Return: the new head
 */

list_t *add_node(list_t **h, const char *str)
{
	size_t i = 0;
	list_t *new = NULL;

	if (h)
	{
		new = malloc(sizeof(list_t));
		if (!new)
			return (NULL);
		new->str = strdup(str);
		if (!new->str)
		{
			free(new);
			return (NULL);
		}
		while (str[i])
			i++;
		new->len = i;
		new->next = *h;
		*h = new;
	}
	return (new);
}
