#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: numeric value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = malloc(sizeof(*newnode));
	dlistint_t *tempnode = *h;
	unsigned int count = 0;

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;
	if (!(*h))
	{
		*h = newnode;
		return (newnode);
	}

	if (idx == 0)
	{
		newnode->next = *h;
		(*h)->prev = newnode;
		*h = newnode;
		return (newnode);
	}

	while (tempnode->next && count != idx - 1)
	{
		tempnode = tempnode->next;
		count++;
	}

	if (count + 1 < idx)
		return (NULL);
	newnode->next = tempnode->next;
	newnode->prev = tempnode;
	if (tempnode->next)
		tempnode->next->prev = newnode;
	tempnode->next = newnode;
	return (newnode);
}
