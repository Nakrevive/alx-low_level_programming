#include "main.h"

/**
 * _puts_recursion - print a string followed by a newline
 * @s: input
 * Return: always 0 (succes)
 */
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
