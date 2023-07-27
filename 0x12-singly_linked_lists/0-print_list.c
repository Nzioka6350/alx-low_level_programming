#include <stdio.h>
#include "lists.h"

/**
 * print_linked_list - Prints all the elements of a linked list.
 * @head: Pointer to the first node of the linked list.
 *
 * Return: The number of nodes printed.
 */
size_t print_linked_list(const list_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		if (!head->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", head->len, head->str);

		head = head->next;
		node_count++;
	}

	return (node_count);
}
