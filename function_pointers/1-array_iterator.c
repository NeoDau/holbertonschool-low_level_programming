#include "function_pointers.h"
#include <stddef.h>
#include <stddef.h>
/**
 *array_iterator - function executes a function
 *@array: array being passed
 *@size: size of array
 *@action: pointer to the function
 *Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (a = 0; a < size; a++)
		{
			action(array[a]);
		}
	}
}
