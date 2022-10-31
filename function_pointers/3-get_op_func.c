#include <stdio.h>
#include "3-calc.h"
#include <string.h>
/**
 *get_op_func - select the correct function
 *@s: operator passed the function
 *Return: ALways 0
 */
int (*get_op_func(char *s))(int, int)
{
	op_t[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int a;

	for (a = 0; a < 5; a++)
	{
		if (strcmp(s, op[a].op) == 0)
		{
			return (op[a].f);
		}
	}
	return (NULL);
}
