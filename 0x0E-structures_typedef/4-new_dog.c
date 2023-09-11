#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * _strlen - returns the lenght of a string
 * @str: string to find length
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
/**
 * _strcpy - copies the string pointed to by src including
 * the terminating null byte (\0) to the
 * buffer pointed to by dest
 * @dest: the bufffer soring the string copy
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	doggo->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	doggo->name = _strcpy(doggo->name, name);
	doggo->age = age;
	doggo->owner = _strcpy(doggo->owner, owner);
	return (doggo);
}
