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

int _strlen_recursion(char *s)
{
    if (*s)
        return 1 + _strlen_recursion(s + 1);
    else
        return 0;
}

int factorial(int n)
{
    if (n < 0)
        return -1;
    else if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1;
    else if (y == 0)
        return 1;
    else
        return x * _pow_recursion(x, y - 1);
}

int is_palindrome_helper(char *s, int start, int end)
{
    if (start >= end)
        return 1;
    else if (s[start] != s[end])
        return 0;
    else
        return is_palindrome_helper(s, start + 1, end - 1);
}

int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    return is_palindrome_helper(s, 0, len - 1);
}

int main(void)
{
    char str[] = "Hello, World!";
    int num = 5;

    // Testing the recursive functions
    _puts_recursion(str);
    printf("Length of the string: %d\n", _strlen_recursion(str));
    printf("Factorial of %d: %d\n", num, factorial(num));
    printf("%d raised to the power of %d: %d\n", num, 3, _pow_recursion(num, 3));
    printf("%s%s a palindrome.\n", str, is_palindrome(str) ? " is" : " is not");

    return 0;
}
