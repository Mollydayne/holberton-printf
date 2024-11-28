#include "main.h"

/**
 * print_percent - Handles the %% specifier.
 * @format: The format string (unused in this case).
 * @args: The list of arguments (unused in this case).
 *
 * Description: This function simply prints a '%' character
 * when %% is encountered in the format string.
 *
 * Return: 1 (the number of characters printed).
 */

int print_percent(va_list args)
{
    (void)args;

    _putchar('%');
    return (1);
}