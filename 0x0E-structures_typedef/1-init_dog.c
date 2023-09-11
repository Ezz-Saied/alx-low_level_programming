#include <stdio.h>
#include "dog.h"
/**
* init_dog - init strcture
*
* @d: first operand
* @name:second operand
* @age: third operand
* @owner: fourth operand
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
