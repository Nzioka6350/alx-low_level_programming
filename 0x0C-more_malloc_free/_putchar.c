#include "main.h"
#include <unistd.h>
/**
 * _putchar - character c is written  to stdout
 * @c: Printout
 *
 * Return: 1 On success .
 * -1 is returned on error, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
