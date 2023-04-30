#include "lists.h"
/**
 * pop_listint - delete the head node of a list
 * @head: delete the head
 * Return: n
 */
int pop_listint(listint_t **head)
{
listint_t *lead;
int pop;

	if (head == NULL || *head == NULL)
	return (0);

lead = *head;
pop = lead->n;
*head = (*head)->next;
free(lead);
return (pop);
}
