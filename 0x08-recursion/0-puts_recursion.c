#include "main.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
