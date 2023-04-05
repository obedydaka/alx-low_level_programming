#include "lists.h"
#include <stdio.h>

/**
 * listint_len - This function that returns the number of elements 
 * in a linked listint_t list.
 * @h: Pointer to the string
 * Return: Return number of elements
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		h = h->next;
		num++;
	}
	return (num);
}
