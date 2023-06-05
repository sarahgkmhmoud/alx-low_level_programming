#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"lists.h"
/**
 * calledFirst - constructed function
 */
void __attribute__((constructor)) calledFirst()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
