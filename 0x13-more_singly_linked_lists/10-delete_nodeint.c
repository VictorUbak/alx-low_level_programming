#include "lists.h"

/**
 * delete_nodeint_at_index - deletes at index
 * @head: delete the node
 * @index: node deletes index
 * Return: 1 (successful), -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *keen = *head;
	listint_t *new = NULL;
	unsigned int z = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(keen);
		return (1);
	}

	while (z < index - 1)
	{
		if (!keen || !(keen->next))
			return (-1);
		keen = keen->next;
		z++;
	}


	new = keen->next;
	keen->next = new->next;
	free(new);

	return (1);
}
