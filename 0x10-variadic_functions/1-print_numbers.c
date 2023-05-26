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

if (n <= 0)
	exit(1);

va_start(text, n);

for (i = 0; i < n; i++)
{
	printf("%d", va_arg(text, int));
	if (i == (n - 1))
	printf("\n");
	if (separator != NULL)
	printf("%s", separator);
}
va_end(text);
}
