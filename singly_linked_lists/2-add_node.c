#include "lists.h"
/**
 *add_node - function add new node
 *@head: doble pointer to list_t
 *@str: new string to add in the node
 *Return: ashee
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNodo;
	int a = 0;

	for (; str[a]; a++)
	{}
	newNodo = malloc(sizeof(list_t));
	if (!newNodo)
	{
		return (NULL);
	}
	newNodo->str = strdup(str);
	newNodo->len = a;
	newNodo->next = *head;

	*head = newNodo;

	return (*head);
}
