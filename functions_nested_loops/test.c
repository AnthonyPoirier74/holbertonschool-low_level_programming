#include "main.h"

/**
 * _islower - Fonction qui vérifie si un caractère est en minuscule.
 * @c: Le caractère à vérifier
 *
 * Retourne : 1 si c'est une minuscule,
 *            retourne 0 sinon.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        return (1);
    }
    else
    {
        return (0);
    }
}
