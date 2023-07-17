#include <stdlib.h>
#include "dog.h"
/**
* _strlen - Calculates the length of a string.
* @s: String to evaluate.
*
* Return: The length of the string.
*
* Description: This function calculates the length of the string pointed to by s,
* excluding the null byte.
*/
int _strlen(char *s)
{
	int length = 0;
	while (s[length] != '\0')
		length++;
	return (length);
}
/**
* _strcpy - Copies the string pointed to by src, including the terminating null byte,
* to the buffer pointed to by dest.
* @dest: Pointer to the destination buffer.
* @src: String to be copied.
*
* Return: The pointer to dest.

* Description: This function copies the string pointed to by src, including the
* terminating null byte, to the buffer pointed to by dest.
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
* new_dog - Creates a new dog structure.
* @name: Name of the dog.
* @age: Age of the dog.
* @owner: Owner of the dog.
*
* Return: Pointer to the new dog structure (Success), NULL otherwise.
*
* Description: This function creates a new dog structure dynamically, allocates
* memory for it, and initializes its members with the provided values for name,
* age, and owner. It returns a pointer to the newly created dog structure.
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_length, owner_length;
	name_length = _strlen(name);
	owner_length = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (name_length + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
