#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*add_dnodeint - add node
*@head:pointer to point to headpointer
*@n: string represent the node date
*Descrption: print the data
*Return: "(*header) always success
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));


	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;
	if (*head != NULL)
		(*head)->prev = ptr;

	*head = ptr;
	return (*head);
}
