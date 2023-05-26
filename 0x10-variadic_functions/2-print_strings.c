#include<stdio.h>
#include<stdarg.h>
#include <stdlib.h>
#include"variadic_functions.h"
/**
 *print_strings - print them
 *@separator: string of char
 *@n: const unsigned int
 *
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

unsigned int i;
va_list sptr;
char *s;

va_start(sptr, n);

for (i = 0; i < n; i++)
{
	s = va_arg(sptr, char *);
	if (s != NULL)
	printf("%s", s);
	else
	printf("(nil)");

	if (i == (n - 1))
	break;
	if (separator != NULL)
	printf("%s", separator);
}
printf("\n");
va_end(sptr);
}
