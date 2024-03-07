#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a newline using recursion
 * @s: Pointer to the string to be printed
 *
 * Description: This function prints each character of the string pointed to by
 * 's' followed by a newline character ('\n'). It utilizes recursion to
 * achieve this.
 **/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
