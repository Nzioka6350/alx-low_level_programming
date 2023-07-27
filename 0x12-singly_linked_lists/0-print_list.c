#include "lists.h"

/**
 * print_listint - prints the elements of a list
 * @h: the linked list of type to print
 * Return: The number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h)
	{
	printf("%d\n", h->n);
	nodenum++;
	h = h->next;
	}

	return (nodenum);

}
