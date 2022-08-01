#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's name
 * @owner: dog's owner
 *
 * Return: pointer to the new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int n_len, o_len, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	for (n_len = 0; name[n_len]; n_len++)
		;
	n_len++;

	dog->name = malloc(sizeof(char) * n_len);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n_len; i++)
		dog->name[i] = name[i];

	dog->age = age;

	for (o_len = 0; owner[o_len]; o_len++)
		;
	o_len++;

	dog->owner = malloc(sizeof(char) * o_len);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o_len; i++)
		dog->owner[i] = owner[i];

	return (dog);
}
