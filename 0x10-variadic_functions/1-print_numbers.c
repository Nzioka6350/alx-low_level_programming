#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of parameters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list jn;
	unsigned int a, sum = 0;

	va_start(jn, n);

	for (a = 0; a < n; a++)
		sum += va_arg(jn, int);

	va_end(jn);

	return (sum);
}
