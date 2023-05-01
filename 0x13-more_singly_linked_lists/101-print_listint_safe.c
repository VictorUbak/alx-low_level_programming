#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts node
 * @head: listint for checking
 * Return: - 0.
 * or - the number of node
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tom, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tom = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tom == hare)
		{
			tom = head;
			while (tom != hare)
			{
				nodes++;
				tom = tom->next;
				hare = hare->next;
			}

			tom = tom->next;
			while (tom != hare)
			{
				nodes++;
				tom = tom->next;
			}

			return (nodes);
		}

		tom = tom->next;
		hare = (hare->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Print safe version
 * @head: linked list
 * Return: number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
