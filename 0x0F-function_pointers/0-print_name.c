#include<stdio.h>
#include <stdlib.h>
#include"function_pointers.h"
/**
 *print_name - print name
 *@name: as a string
 *@f: as a pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(1);
	f(name);
}
