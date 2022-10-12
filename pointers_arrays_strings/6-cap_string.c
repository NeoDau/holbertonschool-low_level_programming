#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 *cap_string - function
 *@cap: value char
 *Return: cap
 */

char *cap_string(char *cap)
{
	int a;

	for (a = 0; cap[a] != '\0'; a++)
	{
		if (cap[a] == ' ' || cap[a] == '\t' || cap[a] == '\n' ||
			cap[a] == ',' || cap[a] == ';' || cap[a] == '.' ||
			cap[a] == '!' || cap[a] == '?' || cap[a] == '"' ||
			cap[a] == '(' || cap[a] == ')' || cap[a] == '{' ||
			cap[a] == '}')
		{
			if (cap[a + 1] >= 'a' && cap[a + 1] <= 'z')
				cap[a + 1] = cap[a + 1] - 32;

		}
	}
	return (cap);
}
