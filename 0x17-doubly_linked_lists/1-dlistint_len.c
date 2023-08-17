#include"lists.h"
/**
*dlistint_len - print the linked lists
*@h : header pointer
*Descrption: print the data
*Return: count always success
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *curr = h;

	for (; curr != NULL; curr = curr->next, count++)
	{
		;
	}
	return (count);
}
