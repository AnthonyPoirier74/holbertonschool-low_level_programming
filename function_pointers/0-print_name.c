#include "function_pointers.h"
/**
 * print_name - a
 * @name: a
 * @f: a
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
