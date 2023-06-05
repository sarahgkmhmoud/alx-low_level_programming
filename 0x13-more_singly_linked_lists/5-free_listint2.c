#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
* free_listint - free node
*@head:pointer to point to headpointer
*Descrption: print the data
*/
void free_listint2(listint_t **head)
{
	listint_t **tmp;
	while(*head!= NULL)
{
	
	tmp =&(* head)->next;
	free(*head);
	*head = NULL;
	head = tmp;

}

}
