#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to
 * @key: key inside the hash table - can not be an empty string
 * @value: value to pair with key - must be duplicated - can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node = NULL;
    hash_node_t *aux = NULL;
    unsigned long int index = 0;

    if (!ht || !key || !*key || !value)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    aux = ht->array[index];

    while (aux != NULL)
    {
        if (strcmp(aux->key, key) == 0)
        {
            free(aux->value);
            aux->value = strdup(value);
            return (1);

        }
        aux = aux->next;
    }
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);
    new_node->value = strdup(value);
    new_node->key = strdup(key);
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}