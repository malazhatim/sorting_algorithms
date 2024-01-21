#include "sort.h"
/**
 * fun_swap - swab two nodes in doubly linked list
 * @x: first node
 * @y: secound node
 * Return: void
 */
void fun_swap(listint_t *x, listint_t *y)
{
	if (x->prev)
		x->prev->next = y;
	if (y->next)
		y->next->prev = x;
	x->next = y->next;
	y->prev = x->prev;
	x->prev = y;
	y->next = x;
}

/**
 * insertion_sort_list - sort doubly linked list
 * @list: pointer of head
 * Description: Prints the list after each swap
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *i, *j, *swap;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	for (i = (*list)->next; i != NULL; i = swap)
	{
		swap = i->next;
		j = i->prev;
		while (j != NULL && i->n < j->n)
		{
			fun_swap(i, &j);
			print_list((const listint_t *)*list);
		}
	}
}

