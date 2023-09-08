#include"hash_tables.h"
/**
*hash_table_delete - free the hash table
*@ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp, *movnode = NULL;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{

	temp = ht->array[i];
	while (temp)
	{
	movnode = temp->next;
	if (temp->key != NULL)
	free(temp->key);
	if (temp->value != NULL)
	free(temp->value);
	if (temp != NULL)
	free(temp);
	temp = movnode;
	}
	free(ht->array[i]);
	free(ht);
}
}
