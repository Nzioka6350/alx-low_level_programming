#include "main.h"

/**
 * _atoi - convert a string into an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int res = 0;
	int i = 0;

	while (!(s[i] >= '0' && s[i] <= '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;

	return (res);
}
