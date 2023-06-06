#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*insert_nodeint_at_index - add node
*@head:pointer to point to headpointer
*@n: integer represent the node date
*@idx: print the data
*Return: (*head) always success
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
if (*head != NULL)
{
	for (i = 1; i < idx && tmp != NULL; i++)
	{
	tmp = tmp->next;
	}
	if (i < idx || tmp == NULL)
		return (NULL);

	new->next = tmp->next;
	tmp->next = new;
}

return (tmp);
}
