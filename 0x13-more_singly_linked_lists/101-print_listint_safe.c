#include "lists.h"
#include <stddef.h>

/**
 * checkPrev - checkPrev
 * @h: the list
 * @node:the node to check
 * @conut: index of the node
 * Return:true or false
 */

int checkPrev(listint_t *h, const listint_t *node, size_t count)
{
	size_t i = 0;

	while (h && i < count)
	{
		if (h == node)
		{
			printf("-> [%p] %d\n", (void *)h, h->n);
			return (1);
		}
		i++;
	}
	return (0); 
}

/**
 * print_listint_safe - print a linked list safe
 * @head: the head of the list
 * Return: the size of the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	listint_t *tmp;

	tmp = (listint_t *)head;
	while (head)
	{
		if (checkPrev(tmp, head, count))
			return (count);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;
	}
	return (count);
}
