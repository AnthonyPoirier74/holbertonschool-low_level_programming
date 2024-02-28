#include "main.h"

/**
* print_rev - a
*
*@s : a
*/
void print_rev(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	a--;
	while (s[a] >= 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
