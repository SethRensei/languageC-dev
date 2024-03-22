#include <stdio.h>

/* [ESSENTIEL À SAVOIR]

Comment nommer ma variable ?
    Il y a des règles à respecter, mais libre à nous d'adopter un style

leNomDeMaVariable     -> C'est du camel case
LeNomDeMaVariable     -> c'est du pascal case
le_nom_de_ma_variable -> c'est du snake case

    Il est aussi possible d'écrire le nom de sa variable avec des fichres

MaVariable1 ; ma_variable1 ; etc...

    Nb : Le nom d'une variable ne doit pas contenirdes caractères spéciaux, des espaces ou commencer par un chiffre

*/

// Ceci est la fonction principale (l'entrée de notre application)
int main()
{
    // Déclaration
    int number;

    // Initialisation
    char letter = 'c';

    // Affectation
    number = 5;

    // Fonction permettant d'afficher un message à la console
    // Elle peut prendre en paramètres permettant d'afficher le contenu de nos variables suivant son code format
    printf("La lettre entree est : %c\n", letter);
    printf("Le nombre est : %u\n", number);
    return 0;
}
