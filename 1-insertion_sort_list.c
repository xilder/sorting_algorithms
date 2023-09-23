#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * of integers using the insertion method
 *
 * @list: the unsorted list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *set, *curr, *prev;

	set = *list;
	if (set == NULL || set->next == NULL)
		return;

	set = set->next;
	while (set != NULL)
	{
		curr = set;
		while (curr->prev != NULL && curr->n < curr->prev->n)
		{
			prev = curr->prev;
			if (curr->next != NULL)
				curr->next->prev = prev;
			prev->next = curr->next;
			curr->next = prev;
			curr->prev = prev->prev;
			prev->prev = curr;
			if (curr->prev != NULL)
				curr->prev->next = curr;
			else
				*list = curr;
			print_list((*list));
		}
		set = set->next;
	}
}
