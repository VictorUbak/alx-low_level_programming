#include "lists.h"
/**
 * sum_listint - return all the data of a list
 * @head: sum list
 * Return: 0
 */
int sum_listint(listint_t *head)
{
int l = 0;

	while (head)
	{
	l += head->n;
	head = head->next;
	}
	return (l);
}
