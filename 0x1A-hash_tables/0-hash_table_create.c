#include "hash_tables.h"
#include <stdlib.h>

/**
* where size is the size of the array
* Returns a pointer to the newly created hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
return NULL;
}
table->size = size;
table->array = calloc(size, sizeof(hash_table_t));
if (table->array == NULL)
{
free(table);
return NULL; /*error: could not allocate memory for the items array*/
}
return table;
}
