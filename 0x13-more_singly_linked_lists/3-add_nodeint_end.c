#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*add_node_end - add node
*@head:pointer to point to headpointer
*@n: integer represent the node date
*Descrption: print the data
*Return: "(*header) always success
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *ptr;

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
	return (NULL);

	tmp->n = n;
	tmp->next = NULL;
if (*head != NULL)
{
	ptr = *head;
	while (ptr->next != NULL)
	{
	ptr = ptr->next;
	}
	ptr->next = tmp;
}
else
*head = tmp;

return (tmp);
}
