#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of list
 *
 * @n: node to add to list
 * Return: addres sof new element or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *h;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	h = *head;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = newNode;
	}
	else
	{
		*head = newNode;
	}

	newNode->prev = h;

	return (newNode);
}
