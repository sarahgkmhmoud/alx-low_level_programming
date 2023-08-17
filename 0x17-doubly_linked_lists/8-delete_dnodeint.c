#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*delete_dnodeint_at_index - delete node
*@head:pointer to point to headpointer
*@index: print the data
*Return: curr always success
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = *head;

	if (*head == NULL)
		return (-1);

	for (i = 0;  i < index && curr != NULL; i++)
		curr = curr->next;

	if (i != index)
		return (-1);

	if (curr->prev != NULL)
		curr->prev->next = curr->next;
	if (curr->next != NULL)
		curr->next->prev = curr->prev;
	if (curr == *head)
		*head = curr->next;
	free(curr);
	return (1);
}

