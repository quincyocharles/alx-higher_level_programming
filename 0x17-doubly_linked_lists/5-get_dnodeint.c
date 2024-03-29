#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @index: position of node to return
 * Return: on error, nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *tmp;

	size = 0;
	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);

		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
