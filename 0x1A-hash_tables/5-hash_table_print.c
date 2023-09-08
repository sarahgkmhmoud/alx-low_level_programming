#include"hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
    if(ht->array[i] == NULL)
    continue;
    if (i <= ht->size - 1)
    printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
    else if (i == ht->size -1 && ht->array[i] != NULL)
    printf("'%s': '%s'}", ht->array[i]->key, ht->array[i]->value);
}
}
