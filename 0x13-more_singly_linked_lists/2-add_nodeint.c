#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - This function that adds a new node
 * at the beginning of a listint_t list.
 * @head: The pointer to the first node
 * @n: Pointer to the elements
 * Return: The address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	int *bk;
	int len2 = 0;

	bk = malloc(sizeof(int));
	if (bk == NULL)
	{
		return (NULL);
	}

	while (str[len2])
		len2++;

	bk->len = len2;
	bk->str
