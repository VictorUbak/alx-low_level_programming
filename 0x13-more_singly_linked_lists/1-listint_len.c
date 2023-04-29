#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - list len
 * @h: print list int
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{

	size_t  i = 0;

		while (h != NULL)
		{
			h = h->next;
			i++;
		}
return (i);
}
