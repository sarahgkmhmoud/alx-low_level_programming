#include<stdio.h>
#include<stdarg.h>
#include <stdlib.h>
#include"variadic_functions.h"
/**
 *print_numbers - print them
 *@separator: string of char
 *@n: const unsigned int
 *
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

unsigned int i;
va_list text;


va_start(text, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(text, int));
	if (i == (n - 1))
	{
	break;
	}
	if (separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(text);
}
