#include <stdio.h>
#include <stdlib.h>
/**
 *main - function prints all arguments
 *@argc: int
 *@argv: char
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
