#include <unistd.h>
/**
* _putchar - Print a single character on standard output.
* &a: The character to print.
*
* Return: On success, the number of bytes written (1) is returned.
* On error, -1 is returned, and errno is set appropriately.
*
*/
int _putchar(char a)
{
	return (write(1, &a, 1));
}
