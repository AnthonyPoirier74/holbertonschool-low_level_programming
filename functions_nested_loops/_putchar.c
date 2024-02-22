#include <unistd.h>
/**
*  _putchar - Fonction for print a single character
*             on standard output.
*/
int _putchar(char a)
{
	return (write(1, &a, 1));
}
