#include"hash_tables.h"
/**
*hash_table_delete - free the hash table
*@ht: the hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *temp, *nextNode;

if (ht == NULL)
return;

for (i = 0; i < ht->size; i++)
{
		temp = ht->array[i];
	while (temp != NULL)
	{
	nextNode = temp->next;
	free(temp->key);
	free(temp->value);
	free(temp);
	temp = nextNode;
	}
}
free(ht->array);
free(ht);
}
