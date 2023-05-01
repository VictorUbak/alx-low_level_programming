#include "lists.h"

/**
 * find_listint_loop - find the loop
 * @head: pointer to find the loop
 * Return: address, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *up = head;
	listint_t *down = head;

	if (!head)
		return (NULL);

	while (up && down && down->next)
	{
		down = down->next->next;
		up = up->next;
		if (down == up)
		{
			up = head;
			while (up != down)
			{
				up = up->next;
				down = down->next;
			}
			return (down);
		}
	}

	return (NULL);
}
