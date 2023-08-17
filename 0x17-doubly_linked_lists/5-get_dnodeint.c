#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*get_dnodeint_at_index - get node
*@head:pointer to point to headpointer
*@index: print the data
*Return: curr always success
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *curr = head;

for (i = 0;  i < index && curr != NULL; i++)

	curr = curr->next;
if (i != index)
{
	return (NULL);
}
return (curr);
}

