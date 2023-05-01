#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: first node
 * Return: size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t jee = 0;
	int ref;
	listint_t *lead;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		ref = *h - (*h)->next;
		if (ref > 0)
		{
			lead = (*h)->next;
			free(*h);
			*h = lead;
			jee++;
		}
		else
		{
			free(*h);
			*h = NULL;
			jee++;
			break;
		}
	}

	*h = NULL;

	return (jee);
}
