#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: return
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *head;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	i = key_index((unsigned char *) key, ht->size);

	if (ht->array[i] == NULL || ht->array[i] == 0)
		return (NULL);

	if (strcmp(ht->array[i]->key, key) == 0)
		return (ht->array[i]->value);
	head = ht->array[i];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
	return (hash_djb2(key) % size);

