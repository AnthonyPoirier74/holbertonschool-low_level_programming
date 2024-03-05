#include "main.h"

/**
 * puts2 - Imprime chaque autre caractère d'une chaîne,
 *         en commençant par le premier.
 * @str: La chaîne de caractères à imprimer.
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}

	_putchar('\n');
}
