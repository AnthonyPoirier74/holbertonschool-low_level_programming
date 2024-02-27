#include "main.h"

/**
* print_triangle - Prints a triangle of '#' characters.
* @size: The size of the triangle to be printed.
*
*/
void print_triangle(int size)
{
	int a, b;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size; b++)
		{
			if (b <= size - a)
				_putchar(' ');
			else
			_putchar('#');
		}
	_putchar('\n');
	}
}
