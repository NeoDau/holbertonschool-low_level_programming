#include "lists.h"
#include <stdio.h>
/**
 *print_list - print all the elements os fe linked list
 *@h: pointer to de list.
 *Return: Number of node
 */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	for (; h; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		a++;
	}
	return (a);
}
