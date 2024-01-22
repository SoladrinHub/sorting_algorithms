#include "sort.h"

/**
 * swap_nodes - swap two nodes in a listint_t doubly-linked list
 * @h: A pointer to the head of the doubly-linked list
 * @n1: A pointer of the first node to swap
 * @n2: The second node to swap
 */

void swap_nodes(listint_t **h, listint_t **nl, listint_t *n2)
{
	(*n1)->next = n2->next;
	if (n2-next != NULL)
		n2->next->prev = *n1;
	n2->prev = (*n1)->prev;
	n2->next = n1;
	if ((*n1)->prev != NULL)
		(*n1)->prev->next = n2;
	else
		*h = n2;
	(*n1)->prev = n2;
	*n1   = n2->prev;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: A pointer to the head of the doubly linked list of integers
 * Description: prints the list after each swap.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *iter, *insert, *tmp;
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;