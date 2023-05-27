#include"calc.h"
#include<stdio.h>
/**
 *
 *
 *
 *
 */
int (*get_op_func(char *s))(int, int)
{
	 op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    i = 0;
    while (i == '\0')
    {
	   get_op_function (s[i][i])
    }
}
