#include "dog.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * free_dog - initialize a variable of type struct dog
 * @d: First member
 * Description: Longer description
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
