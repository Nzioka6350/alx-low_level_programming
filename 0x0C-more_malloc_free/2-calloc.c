#include <stdlib.h>
#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area
 * @b: Value to be set
 * @n: Number of bytes to be set
 *
 * Return: Pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 * _calloc - Allocates memory for an array
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
