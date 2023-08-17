#include"lists.h"
/**
 *free_dlistint - free pointer
 *@head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
		if (head == NULL)
			return;
	while (curr->next != NULL)
	{
	curr = curr->next;
	free(curr->prev);
	}
	free(curr);
	head = NULL;
}
