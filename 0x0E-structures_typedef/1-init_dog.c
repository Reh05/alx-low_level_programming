#include <stdlib.h>
#include "dog.h"
/**
  * init_dog - creates a variable of type struct dog
  * @v: pointer to struct dog to initialize
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  */
void init_dog(struct dog *v, char *name, float age, char *owner)
{
	if (v == NULL)
		v = malloc(sizeof(struct dog));
	v->name = name;
	v->age = age;
	v->owner = owner;
}
