0 Écrire un script qui exécute un fichier C à travers le préprocesseur et enregistre le résultat dans un autre fichier.
Le nom du fichier C sera enregistré dans la variable $CFILE
Le résultat doit être sauvegardé dans le fichier c

1 Écrire un script qui compile un fichier C mais ne le lie pas.
Le nom du fichier C sera enregistré dans la variable $CFILE
Le fichier de sortie doit porter le même nom que le fichier C, mais avec l'extension .o au lieu de .c.
Exemple : si le fichier C est main.c, le fichier de sortie doit être main.o.

2 Écrire un script qui génère le code d'assemblage d'un code C et l'enregistre dans un fichier de sortie.
Le nom du fichier C sera enregistré dans la variable $CFILE
Le fichier de sortie doit porter le même nom que le fichier C, mais avec l'extension .s au lieu de .c.
Exemple : si le fichier C est main.c, le fichier de sortie doit être main.s.

3 Écrire un script qui compile un fichier C et crée un exécutable nommé cisfun.
Le nom du fichier C sera sauvegardé dans la variable $CFILE

4 Ecrivez un programme C qui imprime exactement "Programmer, c'est comme construire un puzzle multilingue", suivi d'une nouvelle ligne.
Utilisez la fonction puts
Vous n'êtes pas autorisé à utiliser printf
Votre programme doit se terminer par la valeur 0

5 Ecrivez un programme C qui imprime exactement avec une grammaire correcte, mais le résultat est une œuvre d'art,, suivie d'une nouvelle ligne.
Utiliser la fonction printf
Vous n'êtes pas autorisé à utiliser la fonction puts
Votre programme doit retourner 0
Votre programme doit se compiler sans avertissement lors de l'utilisation de l'option -Wall de gcc

6 Écrire un programme C qui imprime la taille de différents types sur l'ordinateur sur lequel il est compilé et exécuté.
Vous devez produire exactement la même sortie que dans l'exemple.
Les avertissements sont autorisés
Votre programme doit retourner 0
Si vous utilisez linux sur Vagrant, vous devrez peut-être installer le paquet libc6-dev-i386 pour tester l'option -m32 de gcc (normalement, vous n'avez rien à faire dans votre bac à sable).
