#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - This function adds a node to the head of the list
 * @head: The double pointer to the head
 * @n: The data to add into new node
 * Return: A pointer to new element or NULL on failure.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *the_new_node = NULL;
	*temp = NULL;

	the_new_node = malloc(sizeof(dlistint_t));
	if (!the_new_node)
	{
		free(the_new_node);
		return (NULL);
	}

	the_new_node->next = NULL;
	the_new_node->prev = NULL;
	the_new_node->n = n;

	if (!head || !(*head))
	{
		*head = the_new_node;
		return (the_new_node);
	}
	else
	{
		temp = *head;
		temp->prev = new_node;
		*head = the_new_node;
		the_new_node->next = temp;
		return (the_new_node);
	}
	return (NULL);
}
