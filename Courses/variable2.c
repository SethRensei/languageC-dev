#include <stdio.h>
#define PI 3.14159



int number = 10; // Variable globale

void show() {
    // on parlera des chaines de caractères et de tableaux plus tard dans ce cours
    char fullname[] = "Seth SITA"; // Variable locale à show
    printf("Le nombre est : %d\n", number);
    printf("Mon nom complet est : %s\n", fullname);
}

int main()
{
    // Masque la variable globale par une variable locale du même nom
    int number;
    const float ray = 5.3;
    show(); // Affiche 10
    printf("La valeur de PI est : %f", PI);

    // ray = 6.3; // Erreur
    // PI = 3.14; // Erreur

    printf("\n\nL'aire d'un cercle de rayon %0.2f est : %0.3f\n", ray, 2 * ray * PI);

    number = 15;
    show(); // Affiche 10, car la procédure utilise la variable globale

    printf("\nLe nombre est : %d\n", number); // Affiche 15

    // printf("Mon nom complet est : %s", fullname); // produira une erreur
    return 0;
}
