#include"hash_tables.h"

// int hash_table_set(hash_table_t *ht, const char *key, const char *value)
// {
//     hash_node_t **current;
//     long unsigned int index;
//     if (key == NULL || value == NULL)
//     return (0);

//     index = key_index((const unsigned char *)key, ht->size);
    
//     current = malloc(sizeof(hash_node_t *));
//         if (current == NULL) 
//                 return (0);

//     current[index]->next = NULL;
//     current[index]->key = strdup(key);
//     current[index]->value =strdup(value);
//     if (ht->array[index] == NULL)
//     {
//         *current = ht->array[index];
//     }
//     else
//     {
//     current[index]->next = ht->array[index];
//     ht->array[index] = *current;
//     }
//     return (1);
// }

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *current;
    unsigned long int index;

    if (ht == NULL || key == NULL || value == NULL)
        return 0;

    index = key_index((const unsigned char *)key, ht->size);

    current = malloc(sizeof(hash_node_t));
    if (current == NULL)
        return 0;

    current->key = strdup(key);
    if (current->key == NULL) {
        free(current);
        return 0;
    }

    current->value = strdup(value);
    if (current->value == NULL) {
        free(current->key);
        free(current);
        return 0;
    }

    current->next = ht->array[index];
    ht->array[index] = current;

    return 1;
}
