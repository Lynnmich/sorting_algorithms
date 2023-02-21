#include "sort.h"
/**
 * insertion_sort_list - sort a doubly linked list
 * @list: Pointer to head of the list
 * start: element to the left
 * new: element to the right
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *new, *start;

	if (!list || !(*list) || !(*list)->next)
		return;
	start = *list;
	new = *list;
	start = start->next;
	while (start != NULL)
	{
		new = start;
		start = start->next;
		while (new->prev != NULL && new->n < new->prev->n)
		{
			if (new->next != NULL)
				new->next->prev = new->prev;
			if (new->prev->prev != NULL)
				new->prev->prev->next = new;
			else
				*list = new;
			new->prev->next = new->next;
			new->next = new->prev;
			temp = new->prev->prev;
			new->prev->prev = new;
			new->prev = temp;
			print_list(*list);
		}
	}
}
