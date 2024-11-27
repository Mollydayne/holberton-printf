#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct selector - Associate a format and the function
 * @format: Format specifier
 * @func: Pointer to the good function for the format
 */
typedef struct selector
{
	char *format;
	int (*func)(va_list);
} structype_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list list);
int print_str(va_list list);
int print_percent(va_list list);

#endif
