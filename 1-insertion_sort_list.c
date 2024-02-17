#include "sort.h"

/**
 * swap_nodes - Swap two nodes
 * @h: A pointer to the head
 * @node1: Pointer to the first node
 * @node2: The second node
 */

void swap_nodes(listint_t **h, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*h = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: A pointer to the head of the doubly linked list
 */

/* Time Complexity: O(n^2)*/
void insertion_sort_list(listint_t **list)
{
	listint_t *itr, *insert, *tmp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (itr = (*list)->next; itr != NULL; itr = tmp)
	{
		tmp = itr->next;
		insert = itr->prev;
		while (insert != NULL && itr->n < insert->n)
		{
			swap_nodes(list, &insert, itr);
			print_list((const listint_t *)*list);
		}
	}
}
