#include "main.h"
/*
 *main - check the code.
 *Return: Always 0.
 * print_alphabet_x10 - prints alphabets 10times in lowercase
 */
void print_alphabet_x10(void)
{
char ch;
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
