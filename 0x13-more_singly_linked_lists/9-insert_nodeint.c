#include "lists.h"

/**
 * *insert_nodeint_at_index - insert a new node
 * @head: insert
 * @idx: insert in index
 * @n: new node
 * Return:  NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int l;
	listint_t *new;
	listint_t *lead = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (l = 0; lead && l < idx; l++)
	{
		if (l == idx - 1)
		{
			new->next = lead->next;
			lead->next = new;
			return (new);
		}
		else
			lead = lead->next;
	}

	return (NULL);
}
