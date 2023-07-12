#include "hash_tables.h"
/**
 * hash_table_print - print key and values of hash table in order
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node;
	char *comm = "";

	if (!ht || !ht->array)
		return;

	putchar('{');
	while (i < ht->size)
	{
		node = ((ht->array)[i]);
		while (node)
		{
			printf("%s'%s': '%s'", comm, node->key, node->value);
			comm = ", ";
			node = node->next;
		}
		i++;
	}
	puts("}");
}
