#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - Function determines length of string
 * @s: string input
 *
 * Return: Returns length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strcpy - Function copies string from source to dest
 * @dest: destination
 * @src: source
 *
 * Return: Returns destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog -creates a new data structure for dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 *
 * Return: Returnns new struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int len_name, len_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	len_name = _strlen(name) + 1;
	new_dog->name = malloc(sizeof(char) *  len_name);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	new_dog->name = _strcpy(new_dog->name, name);
	len_owner = _strlen(owner) + 1;
	new_dog->owner = malloc(sizeof(char) * len_owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = _strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);

}
