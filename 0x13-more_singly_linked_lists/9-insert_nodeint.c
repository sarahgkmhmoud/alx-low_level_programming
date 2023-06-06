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

if (idx == 0 && tmp == NULL)
{
	new->next = *head;
	*head = new;
	return (new);
}
	for (i = 1; i < idx && tmp != NULL; i++)
	{
	if (tmp == NULL || tmp->next == NULL)
		return (NULL);
	tmp = tmp->next;
	}

	new->next = tmp->next;
	tmp->next = new;


return (new);
}
