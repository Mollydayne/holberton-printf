#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

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
		{"%i", print_int},
		{"%d", print_int},
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
				return (-1);
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
