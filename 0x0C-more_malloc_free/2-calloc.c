#include <stdlib.h>
#include "main.h"

/**
 * *_memset -a constant byte  fills memory
 * @s: memory area 
 * @b: character to copy
 * @n: number of times to copy character b
 *
 * Return: return a pointer to the  s
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
 * *_calloc - memory for an array is allocated
 * @nmemb: number of elements in the array
 * @size: size of element
 *
 * Return:returns a  pointer to allocated memory
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
