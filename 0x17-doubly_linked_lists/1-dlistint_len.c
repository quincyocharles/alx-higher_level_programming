#include "lists.h"

/**
 * dlistint_len - function that counts the number of elements
 * in a linked list
 *
 * @h: linked list address
 * Return: number of list elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;
	
	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	
	return (counter);
}
