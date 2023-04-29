#include "lists.h"

/**
 * free_listint - free end list
 * @head: free list
 */
void free_listint(listint_t *head)
{
	listint_t *tom;

	while (head)
	{
		tom = head->next;
		free(head);
		head = tom;
	}
}
