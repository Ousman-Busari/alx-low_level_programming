#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 *
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_ptr;
	char *name_copy, *owner_copy;
	int name_len, owner_len, i;

	name_len = owner_len = 0;
	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len++])
		;
	while (owner[owner_len++])
		;
	new_ptr = malloc(sizeof(dog_t));
	if (new_ptr == NULL)
		return (NULL);
	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(new_ptr);
		free(name_copy);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		name_copy[i] = name[i];
	name_copy[i] = '\0';
	owner_copy = malloc(owner_len + 1);
	if (owner_copy == NULL)
	{
		free(new_ptr);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		owner_copy[i] = owner[i];
	owner_copy[i] = '\0';
	new_ptr->name = name_copy;
	new_ptr->age = age;
	new_ptr->owner = owner_copy;
	return (new_ptr);
}
