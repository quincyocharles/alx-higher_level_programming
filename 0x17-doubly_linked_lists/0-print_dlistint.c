#include "lists.h"

/**
 * print_dlistint - function that prints all the elements
 * of a linked list.
 * @h: The list in question
 * @Return: list elements and their nuber
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
