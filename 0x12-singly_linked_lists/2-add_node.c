#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*add_node - add node
*@head:pointer to point to headpointer
*@str: string represent the node date
*Descrption: print the data
*Return: "(*header) always success
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	ptr = malloc(sizeof(list_t));


	if (ptr == NULL)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = strlen(str);
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
