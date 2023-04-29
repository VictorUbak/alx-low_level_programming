#include "lists.h"
/**
 * free_listint - free the list
 * @head: free list
 */
void free_listint(listint_t *head)
{
listint_t *lead;

while (head != NULL)

{
head = lead;
lead = head->next;
free(head);
}
}
