#include "lists.h"

/**
 * *reverse_listint - reverse list
 * @head: reverse linked list
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *new = NULL;

	while (*head)
	{
		new = (*head)->new;
		(*head)->new = past;
		past = *head;
		*head = new;
	}

	*head = past;

	return (*head);
}
