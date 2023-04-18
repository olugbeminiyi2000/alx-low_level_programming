#include "dog.h"
#include <stddef.h>
/*Write a function that creates a new dog.*/
/**
 * new_dog - Our function
 *
 * @name: name pointer parameter
 * @age: age variable parameter
 * @owner: owner pointer parameter
 * Return: return a pointer to structure data type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t bella;
	dog_t *ptr = &bella;
	bella.name = name;
	bella.age = age;
	bella.owner = owner;

	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
