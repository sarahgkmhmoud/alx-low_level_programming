#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*add_node_end - add node
*@head:pointer to point to headpointer
*@str: string represent the node date
*Descrption: print the data
*Return: "(*header) always success
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, tmp;
	*ptr = &head;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
	return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;

	while (ptr->next != NULL)
	ptr = ptr->next;

	ptr->next = tmp;

return (*head);
}
