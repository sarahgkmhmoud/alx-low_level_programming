#include<stdio.h>
#include<stdarg.h>
#include <stdlib.h>
#include"variadic_functions.h"
#define int i;
/**
 *print_strings - print them
 *@separator: string of char
 *@n: const unsigned int
 *
 *
 */
void print_all(const char * const format, ...)
{
va_list ptr;
int i; 

i = 0;
printf ("%d", i);
printf ("%s", format);
va_start(ptr, format);
while (format[i] != '\0')
{
printf("%d\n", va_arg(ptr,format[i]));
i++;
}
printf("\n");
va_end(ptr);
}

void main(void)
{
print_all("iscf", 4, "school", 'c', 0.0);
}
