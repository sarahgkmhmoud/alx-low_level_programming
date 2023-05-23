#include "dog.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));

	d->name = name;
	d->age = age;
	d->owner = owner;
}
