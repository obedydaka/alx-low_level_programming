#include "lists.h"

/**
 * get_nodeint_at_index - This function gets a node of list at specific index
 * @head: A pointer to listint_t struct
 * @index: The index of the selected node
 * Return: A pointer to node at specified index, or NULL if not found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head)
	{
		if (i == index)
		{
			return (head);
		}

		head = head->next;
		i++;
	}
	return (NULL);
}
