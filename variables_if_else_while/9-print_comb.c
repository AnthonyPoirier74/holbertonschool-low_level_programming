#include <stdio.h>
/**
* main - Prints all possible combinations of single-digit numbers,
*        separated by ",", followed by a space,
*        and printed in ascending order.
*
* Return: Always 0 (Succes)
*/
int main(void)
{
	int num;

	for (num = 0 ; num < 10; num++)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
		return (0);
}
