#include "main.h"
/**
 *
 * * _puts_recursion - prints a string
 *
 * * followed by a new line
 *
 * * @s: string to be printed
 * */

void _put_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion(++s);
}
