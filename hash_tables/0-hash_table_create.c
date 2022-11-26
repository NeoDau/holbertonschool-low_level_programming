#include "hash_tables.h"
/**
 *has_table_create - function create hash table
 *@size: the size of the array
 *Return: a pointer to create hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newHt;

	if(!size || size == 0)
	{
		return (NULL);
	}
	newHt = malloc(sizeof(hash_table_t));
	if (!newHt)
	{
		return (NULL);
	}
	newHt->size = size;
	newHt->array = malloc(sizeof(hash_table_t *) * size);
	if (!newHt->array)
	{
		free(newHt);
		return (NULL);
	}
	return (newHt);

}
