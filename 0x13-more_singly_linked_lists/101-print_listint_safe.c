#include "lists.h"
#include <stddef.h>

/**
 * print_listint_safe - print a linked list safe
 * @head: the head of the list
 * Return: the size of the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		if (head->next && head->next >= head)
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			return (1);
		}
		head = head->next;
		count++;
	}
	return (count);
}
