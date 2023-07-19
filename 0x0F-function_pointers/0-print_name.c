#include "function_pointers.h"
#include <stdio.h>

/**
 * print_with_function - Calls a function to print a name.
 * @name: The string to be printed.
 * @print_function: Pointer to the function responsible for printing the name.
 *
 * Return: Nothing.
 **/
void print_with_function(char *name, void (*print_function)(char *))
{
	if (name == NULL || print_function == NULL)
		return;

	print_function(name);
}
