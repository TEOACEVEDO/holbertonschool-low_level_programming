#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int index;
hash_node_t *tmp;

for (index = 0; index < ht->size; index++)
{
while (ht->array[index] != NULL)
{
tmp = ht->array[index]->next;
free(ht->array[index]->value);
free(ht->array[index]->key);
free(ht->array[index]);
ht->array[index] = tmp;
}
}
free(ht->array);
free(ht);
}
