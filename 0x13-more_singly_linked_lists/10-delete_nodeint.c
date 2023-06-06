#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*delete_nodeint_at_index  - delet node
*@head:pointer to point to headpointer
*@index: print the data
*Return: 1 always success
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *curr;

	prev = *head;
	curr = *head;

if (head == NULL || *head == NULL)
{
	return (-1);
}
if (index == 0)
{
	if (*head == NULL)
		return (-1);

	*head = curr->next;
	free(curr);
	curr = NULL;
}
else
{
while (index != 0)
{
	if (*head == NULL)
		return(-1);

	prev = curr;
	curr = curr->next;
	index--;
}
	prev->next = curr->next;
	free(curr);
	curr = NULL;
}
return (1);
}
