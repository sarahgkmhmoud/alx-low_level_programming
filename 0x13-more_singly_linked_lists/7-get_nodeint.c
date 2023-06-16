#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
*get_nodeint_at_index - delet node
*@head:pointer to point to headpointer
*@index: print the data
*Return: head always success
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;


for (i = 0;  i < index && head != NULL; i++)

	head = head->next;
if (i != index)
{
	return (NULL);
}


return (head);
}

