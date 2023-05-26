#include<stdio.h>
#include<stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - sum them
 *@n: const unsigned int
 *
 *
 *Return: (sum) always success
 */
int sum_them_all(const unsigned int n, ...)
{

int sum;
unsigned int i;
va_list adds;

	if (n <= 0)
		return (0);

va_start(adds, n);
sum = 0;

for (i = 0; i < n; i++)
	sum += va_arg(adds, int);

va_end(adds);

return (sum);
}
