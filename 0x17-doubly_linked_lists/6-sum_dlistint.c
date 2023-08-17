#include"lists.h"
/**
*sum_dlistint - sum the linked lists
*@head: header pointer
*Descrption: add the data
*Return: sum always success
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	const dlistint_t *curr = head;

	for (; curr != NULL; curr = curr->next)
	{
		sum += curr->n;
	}
	return (sum);
}
