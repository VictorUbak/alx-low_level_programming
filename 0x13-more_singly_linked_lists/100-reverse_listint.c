#include "lists.h"

/**
 * *reverse_listint - reverse list
 * @head: reverse linked list
 * Return: a pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *past = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = past;
		past = *head;
		*head = next;
	}

	*head = past;

	return (*head);
}
