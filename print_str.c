#include "main.h"

/**
 *print_str - Prints a string from a variadic list
 * @args: The variadic list containing the string
 *
 * Return: The number of characters printed
 */

int print_str(va_list args)
{
    char *s = va_arg(args, char *);
    int count = 0;

    if (s == NULL)
        s = "(null)";
    while (s[count] != '\0')
    {
        _putchar(s[count]);
        count++;
    }
    return (count);
}