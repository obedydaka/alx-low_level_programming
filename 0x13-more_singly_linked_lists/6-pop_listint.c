#include "lists.h"

/**
 * pop_listint - This function deletes the head node of a list and returns
 * the head node's data n.
 * @head:A pointer to listsint_t struct
 * Return: The head node's data from deleted element
 */

int pop_listint(listint_t **head)
{
	listsint_t *temp_node;
	int temp;

	if (*head == NULL)
		return (0);

	temp = (*head)->n;
	temp_node = (*head)->next;
	free(*head);

	*head = temp_node;
	return (temp);
}
