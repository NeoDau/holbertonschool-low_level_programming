#include "lists.h"
/**
 *list_len - function return the number of elements
 *@h: pointer to elements
 *Return: elements
 */
size_t list_len(const list_t *h)
{
	int a = 0;

	for (; h; h = h->next)
	{
		/**printf("-> %d elements\n", a);*/
		a++;
	}
	return (a);
}
