#include "lists.h"
/**
 * *get_nodeint_at_index - get node at index
 * @head: get node
 * @index: get node int
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *temp = head;
unsigned int tom = 0;

	if (head == NULL || index == 0)
	return (NULL);

	while (temp != NULL && tom < index)
	{
	temp = temp->next;
	tom++;
	}

	return (temp);
}
