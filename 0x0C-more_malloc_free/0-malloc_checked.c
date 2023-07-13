#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - malloc is used to allocate memory.
 * @b: number of bytes
 *
 * Return:  returns a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
