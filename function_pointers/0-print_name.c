#include <stdio.h>
#include "function_pointers.h"
/**
 *print_name - function print name
 *@name: name to print
 *@f: function ti send name
 *Return: Always 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
