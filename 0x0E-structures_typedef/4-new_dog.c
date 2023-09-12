#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
* new_dog - creates structures
* @name: first operand
* @age: second operand
* @owner: third operand
*
* Return: struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *x;
	int i;

	x = malloc(sizeof(dog_t));
	if (x == NULL)
		return (NULL);
	x->name = malloc(sizeof(name + 1));
	if (x->name == NULL)
	{
		free(x);
		return (NULL);
	}
	x->owner = malloc(sizeof(owner + 1));
	if (x->owner == NULL)
	{
		free(x->name);
		free(x);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		x->name[i] = name[i];
	x->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		x->owner[i] = owner[i];
	x->owner[i] = '\0';
	x->age = age;
	return (x);
}
