#include "hash_tables.h"


/**
* hash_table_create - function creates new hash table with an array of nodes.
* Return: a pointer to the created hash table
* @size: is the size of the array*
*/

hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
table->size = size;
table->array = calloc(size, sizeof(hash_table_t));
if (table->array == NULL)
{
free(table);
return (NULL); /*error: could not allocate memory for the items array*/
}
return (table);
}
