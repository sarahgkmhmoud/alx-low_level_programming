#include<stdio.h>
#include<stdarg.h>
#include <stdlib.h>
#include"variadic_functions.h"
/**
 *print_all - print them
 *@format: string of char
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list ptr;
int d, i;
char c, *s;
double f;
va_start(ptr, format);
i = 0;
while (format[i] != '\0')
{
	if (format[i] == 'c')
	{
	c = (char) va_arg(ptr, int);
	printf("%c", c);
	}
	else if (*(format + i) == 'i')
	{
	d = va_arg(ptr, int);
	printf("%d", d);
	}
	else if (*(format + i) == 'f')
	{
	f = va_arg(ptr, double);
	printf("%f", f);
	}
	else if (*(format + i) == 's')
	{
	s = va_arg(ptr, char*);
	printf("%s", s);
	}
	i++;
	if (format[i] == '\0')
		break;
	if (format[i] == 's' || format[i] == 'i'
|| format[i] == 'c' || format[i] == 'f')
	printf(", ");
}
printf("\n");
va_end(ptr);
}
