#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function prints the element of listint_t
 * @h: Parameter to the string
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
