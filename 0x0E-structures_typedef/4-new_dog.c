#include "dog.h"
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
/**
 * new_dog - initialize a variable of type struct dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: dog always (success)
 * Description: Longer description
 */
dog_t *new_dog(char *name, float age, char *owner)
{

dog_t *dog = malloc(sizeof(dog_t));
	if (dog  == NULL)
	return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
