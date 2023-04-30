#include "lists.h"

/**
 * get_nodeint_at_index - get node list
 * @head: get node
 * @index: index node
 * Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node = head;
	unsigned int n = 0;

	while (current_node != NULL)
	{
	if (n == index)
{
	return (current_node);
	}
	n++;
	current_node = current_node->next;
	}
	return (NULL);
}
