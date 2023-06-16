#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
* free_list - free node
*@head:pointer to point to headpointer
*Descrption: print the data
*/
void free_list(list_t *head)
{

	list_t *tmp;

while (head != NULL)
{
	tmp = head->next;
	free(head->str);
	free(head);
	head = tmp;
}
}
