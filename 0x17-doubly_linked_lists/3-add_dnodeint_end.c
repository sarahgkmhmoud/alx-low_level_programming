#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*add_dnodeint_end - add node
*@head:pointer to point to headpointer
*@n: string represent the node date
*Descrption: print the data
*Return: "(*header) always success
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *curr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
{
	ptr->prev = NULL;
	*head = ptr;
	return (ptr);
}
	for (curr = *head; curr->next != NULL; curr = curr->next)
	{
		;
	}

	curr->next = ptr;
	ptr->prev = curr;
	return (ptr);
}
