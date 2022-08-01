#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: return new_dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *create_dog;
	int i, name_len, owner_len;

	create_dog = malloc(sizeof(*create_dog));
	if (create_dog == NULL || !(name) || !(owner))
	{
		free(create_dog);
		return (NULL);
	}

	for (name_len = 0; name[name_len]; name_len++)
		;

	for (owner_len = 0; owner[owner_len]; owner_len++)
		;

	create_dog->name = malloc(name_len + 1);
	create_dog->owner = malloc(owner_len + 1);

	if (!(create_dog->name) || !(create_dog->owner))
	{
		free(create_dog->owner);
		free(create_dog->name);
		free(create_dog);
		return (NULL);
	}

	for (i = 0; i < name_len; i++)
		create_dog->name[i] = name[i];
	create_dog->name[i] = '\0';

	create_dog->age = age;

	for (i = 0; i < owner_len; i++)
		create_dog->owner[i] = owner[i];
	create_dog->owner[i] = '\0';

	return (create_dog);
}
