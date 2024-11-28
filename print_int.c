#include "main.h"

/**
 * print_number - function to print a number recursively
 * @num: The unsigned integer to print
 *
 * Return: Number of digits printed
 */
int print_number(unsigned int num)
{
    int count = 0;

    if (num / 10)
        count += print_number(num / 10);

    _putchar((num % 10) + '0');
    count++;

    return (count);
}

/**
 * print_int - Prints an integer, %i or %d specifiers
 * @args: The argument list containing the integer to print
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
    int n = va_arg(args, int);
    unsigned int num;
    int count = 0;

    if (n < 0)
    {
        _putchar('-');
        count++;
        num = -n;
    }
    else
    {
        num = n;
    }
    count += print_number(num);

    return (count);
}
