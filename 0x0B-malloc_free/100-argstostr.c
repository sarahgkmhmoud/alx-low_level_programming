#include<stdio.h>
#include"main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - that returns a pointer to a 2 dimensional array
 *@ac: Describe the integer
 *@av: Describe the integer
 *Return: a always sucsess
 */
char *argstostr(int ac, char **av)
{
	int j, i;
	char **argv = av;
	int argc = ac;
	char* a;
	int s = 0;

	if (argc <= 0 || argv == NULL)
	return (NULL);

	argv = malloc(sizeof(**argv) * (argc));

			for (j = 0; argv[i][j] != '\0'; j++)
{
	s = s + 1;
}

	a = malloc(sizeof(*a) * s); 
	for (i = 0; i < argc - 1; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
{
	a[j] = argv[i][j];
	putchar('\n');
}
}
	return (a);
}
