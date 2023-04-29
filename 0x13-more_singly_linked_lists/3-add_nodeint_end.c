#include "lists.h"
/**
 * add_nodeint_end - print list
 * @head: add node to the end
 * @n: add node
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *t = *head;

	i = malloc(sizeof(listint_t));
	if (i == NULL)
		return (NULL);

	i->n = n;
	i->next = NULL;

	if (*head == NULL)
	{
		*head = i;
		return (i);
	}

	while (t->next)
		t = t->next;

	t->next = i;

	return (i);
}
