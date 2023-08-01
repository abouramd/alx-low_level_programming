#include "lists.h"

/**
 * add_nodeint_end - add node
 * @h: head of the listint
 * @n: the content
 * Return: the new head
 */

listint_t *add_nodeint_end(listint_t **h, const int n)
{
	listint_t *new = NULL;
	listint_t *tmp;

	if (!h)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
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
