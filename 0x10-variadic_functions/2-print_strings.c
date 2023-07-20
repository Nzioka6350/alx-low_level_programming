#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*print_strings - Prints strings, followed by a new line.
*@separator:The string to be printed between strings(or NULL if not needed).
*@n: The number of strings passed to the function.
*@...: A variable number of strings to be printed.
*
*Description:If separator is NULL, it is not printed.
*            If one of the strings is NULL,"(nil)" is printed instead.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	char *str;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
