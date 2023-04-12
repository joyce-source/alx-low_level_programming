#include "hash_tables.h"

/**
 * hash_table_delete - Delete a hash table.
 * @ht: The hash table to delete.
 */
void hash_table_delete(hash_table_t *ht)
{
    hash_node_t *node = NULL, *temp = NULL;
    unsigned long int i;

    /* Free the memory for each node in the array */
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];
        while (node != NULL)
        {
            temp = node->next;
            free(node->key);
            free(node->value);
            free(node);
            node = temp;
        }
    }

    /* Free the memory for the array of pointers to nodes */
    free(ht->array);

    /* Free the memory for the hash table itself */
    free(ht);
}

