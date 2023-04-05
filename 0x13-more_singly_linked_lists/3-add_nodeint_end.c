#include "lists.h"

/**
 * add_nodeint_end - This function adds a new node at the end of a listint_t
 * @head: Pointer to the node
 * @n: The node data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t new_nd, *sv;

	new_nd = malloc(sixeof(listint_t));

	if (new_nd == NULL)
		return (NULL);

	new_nd->n = n;
	if (*head == NULL)
	{
		new_nd->next = *head;
		*head = new_nd;
	}
	else
	{
		new_nd->next = NULL;
		sv = *head;
		while (sv->next)
			sv = sv->next;
		sv->next = new_nd;
	}
	return (new_nd);
}
