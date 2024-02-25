#include "sort.h"

/**
 * insertion_sort_list - Sorts a doubly linked list
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current != NULL)
	{
		listint_t *tmp = current->next;
		listint_t *sorted = current->prev;

		while (sorted != NULL && sorted->n > current->n)
		{
			sorted->next = current->next;

			if (current->next != NULL)
				current->next->prev = sorted;

			current->prev = sorted->prev;
			current->next = sorted;

			if (sorted->prev != NULL)
				sorted->prev->next = current;
			else
				*list = current;

			sorted->prev = current;
			sorted = current->prev;
			print_list(*list);
		}
		current = tmp;
	}
}
