#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*insert_dnodeint_at_index - get node
*@h:pointer to point to headpointer
*@idx: print the data
*@n: integer
*Return: new_node always success
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *curr = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
		if (new_node == NULL)
			return (NULL);
	new_node->n = n;
for (i = 1;  i < idx && curr != NULL; i++)
	curr = curr->next;
if (i != idx)
{
	return (NULL);
}
	new_node->prev = curr;
	new_node->next = curr->next;
	if (curr->next != NULL)
{
	curr->next->prev = new_node;
}
	curr->next = new_node;
	return (new_node);
}
