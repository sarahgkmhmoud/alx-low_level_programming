#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*add_nodeint - add node
*@head:pointer to point to headpointer
*@n: string represent the node date
*Descrption: print the data
*Return: "(*header) always success
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));


	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
