#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
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

/**
 * _printf - Custom version of the printf function
 * @format: The format specifier string to match.
 *
 * Return: A pointer to the corresponding function, or NULL if no match.
 */

int _printf(const char *format, ...)
{
	structype_t selector[] = {
		{"%c", print_c},
		{"%s", print_str},
		{"%%", print_percent},
		{NULL, NULL}};

	va_list args;

	unsigned int i = 0, j = 0;
	int char_counter = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				return (-1);
			}
			for (j = 0; selector[j].format != NULL; j++)
			{
				if (format[i] == selector[j].format[1])
				{
					char_counter += selector[j].func(args);
					break;
				}
			}
			if (selector[j].format == NULL)
			{
				_putchar('%');
				_putchar(format[i]);
				char_counter += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			char_counter++;
		}
		i++;
	}
	va_end(args);
	return (char_counter);
}