#include <unistd.h>
#include "main.h"
/**
 * _putchar - write one character as a stdout
 * @c: character to print
 *
 * Return: 1if success, -1 if fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}