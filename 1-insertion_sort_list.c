#include "sort.h"
/**
 *swap: swaps two elements in the list
 *@list: doubly linked list to be sorted
 */
listint_t *swap(listint_t *head) {
	listint_t * start = new listint_t();
	start->next = head;
	listint_t *curr = head, *prev = start
		while(curr){
		if(curr->next && (curr->next->val < curr->val)){
			while(prev->next && (prev->next->val < curr->val))
				prev = prev->next;
			listint_t *temp = prev->next;
			prev->next = curr->next;
			curr->next = current->next->next;
			prev->next->next =temp;
			prev =start;
		}else
			curr = curr-> next;
		}
	return start->next
		print_list(*list);
