#include "lists.h"

/**
 * add_nodeint - add node
 * @h: head of the listint
 * @str: the content
 * Return: the new head
 */

listint_t *add_nodeint(listint_t **h, const int n)
{
	listint_t *new = NULL;

	if (h)
	{
		new = malloc(sizeof(listint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = *h;
		*h = new;
	}
	return (new);
}
