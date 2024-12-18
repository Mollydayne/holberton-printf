#include "main.h"

/**
 * print_c - Prints a single character from a variadic list
 * @args: The variadic list containing the character
 *
 * Return: Always 1 (number of characters printed)
 */
int print_c(va_list args)
{
    char c = va_arg(args, int);

    _putchar(c);

    return (1);
}