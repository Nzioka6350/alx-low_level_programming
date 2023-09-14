#include "lists.h"

/**
 * sum_dlistint - sum of elements in list
 * @head: list
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	/* Initialize the sum variable */
	int sum = 0;

	/* Traverse the doubly-linked list until the end (NULL is reached) */
	while (head != NULL)
	{
		/* Add the current node's 'n' value to the sum */
		sum += head->n;

		/* Move to the next node in the list */
		head = head->next;
	}

	/* Return the calculated sum */
	return (sum);
}
