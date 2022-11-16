#include "lists.h"
/**
 *free_list - function free a list
 *@head: pointer to free
 *Return: a
 */
void free_list(list_t *head)
{
	list_t *a = head;

	for (; a; a = a->next)
	{
		free(a->str);
		free(a);
	}
	free(a);
}
