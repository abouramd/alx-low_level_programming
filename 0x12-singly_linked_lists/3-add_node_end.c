#include "lists.h"

/**
 * add_node_end - add node
 * @h: head of the list
 * @str: the content
 * Return: the new head
 */

list_t *add_node_end(list_t **h, const char *str)
{
	size_t i = 0;
	list_t *new = NULL;
	list_t *tmp;

	if (!h)
        return (NULL);
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
	new->next = NULL;
    if (!*h)
        *h = new;
    else
    {
        tmp = *h;
        while (tmp->next)
            tmp = tmp->next;
	    tmp->next = new;
    }
	return (*h);
}
