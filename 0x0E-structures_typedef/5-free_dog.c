#include <stdlib.h>
#include "dog.h"
/**
* free_dog - free structures
* @d: first operand
*
*/
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
