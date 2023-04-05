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
	listint_t *new_nd;

	new_nd = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_nd;
	return (*head);
}
