#include "lists.h"

/**
 * free_listint2 - This function frees a list and sets head to NULL
 * @head: A pointer to listint_t structure
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *bk;

	if (head == NULL)
	{
		return;
	}

	bk = *head;
	while (*head)
	{
		bk = *head;
		(*head) = (*head)->next;
		free(bk);
	}
	*head = NULL;
}
