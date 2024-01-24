#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *str);
char *_strcpy(char *str1, char *str2);
/**
 * new_dog - Creates a new dog with copies of name and owner.
 * @name: Pointer to the name of the dog (char *).
 * @age: Age of the dog (float).
 * @owner: Pointer to the owner's name (char *).
 *
 * Return: Pointer to the new dog_t, or NULL if memory allocation fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len;
	size_t owner_len;
	dog_t *new_dog;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	owner_len = _strlen(owner) + 1;
	name_len = _strlen(name) + 1;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = malloc(name_len);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->name, name);

	new_dog->owner = malloc(owner_len);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_dog->owner, owner);

	new_dog->age = age;
	return (new_dog);
}

/**
 *_strlen - compute lenght of a string
 * @str: pointer to the string
 * Return: length of the string
 */
int _strlen(char *str)
{
	int len, i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}

/**
 * _strcpy - duplicate string
 * @str1: destination
 * @str2: source
 * Return: void
 */
char *_strcpy(char *str1, char *str2)
{
	char *dest = str1;

	while ((*str1++ = *str2++) != '\0')
		;
	return (dest);
}
