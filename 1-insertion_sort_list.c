#include "sort.h"

/**
 * insertion_sort_list - sorts a list by insertion
 * @list: pointer pointer to the first list node
 *
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *start;
	listint_t *temp;
	listint_t *tmp;

	start = *list;
	
	do {
		temp = start->next;

		if(temp->n < start->n)
		{
			/*swap middles*/
			if (start->prev && temp->next)
			{
				temp->next->prev = start;
				start->prev->next = temp;
				tmp = temp->next;
				temp->next = start;
				start->next = tmp;
				tmp = start->prev;
				start->prev = temp;
				temp->prev = tmp;

				printf("swapping middles\n");

				print_list(*list);
				start = temp->prev;
			}
			/*swap first*/
			else if(!start->prev && temp->next)
			{
				temp->next->prev = start;
				*list = temp;
				temp->prev = NULL;
				start->prev = temp;
				tmp = temp->next;
				temp->next = start;
				start->next = tmp;

				printf("swapping first\n");

				print_list(*list);
				start = temp;
			}
			/* swap lasties*/
			else if(!temp->next && start->prev)
			{
				
				temp->next = start;
				start->next = NULL;
				tmp = start->prev;
				temp->prev = start->prev;
				start->prev = temp;
				tmp->next = temp;
				printf("swapping lasties\n");


				start = tmp;
				print_list(*list);
			}
			else
			{
				start = start->next;
			}
		}
		else
		{
			start = start->next;
		}
	} while(start->next);		
}			
