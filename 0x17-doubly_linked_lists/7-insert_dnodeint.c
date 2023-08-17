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
	if (idx == 0)
{
	new_node->next = *h;
	*h = new_node;
	return (new_node);
}
for (i = 1;  i < idx && curr != NULL; i++)
{
	if (curr == NULL || curr->next == NULL)
		return (NULL);
	curr = curr->next;
}
	new_node->prev = curr;
	new_node->next = curr->next;
	curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
