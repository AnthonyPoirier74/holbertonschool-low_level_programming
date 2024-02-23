#include "main.h"
#include <unistd.h>
/**
* print_alphabet - Prints the lowercase alphabet to stdout.
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
