#include "lists.h"

/**
 * sum_listint - This function sums values from listint_t
 * @head: A pointer listint_t struct
 * Return: The sum of all the data n from list
 */

int sum_listint(listint_t *head)
{
	int temp;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		temp = head->n;
		sum += temp;
		head = head->next;
	}
	return (sum);
}
