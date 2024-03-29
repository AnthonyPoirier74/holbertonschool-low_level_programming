#include "main.h"
/**
 * times_table - Prints the multiplication table from 0 to 9.
 */
void times_table(void)
{
	int num;
	int mult;
	int result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			result = num * mult;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
