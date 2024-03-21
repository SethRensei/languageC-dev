#include <stdio.h>

/* 

1- Nous voulons voir la dominance d'un nombre, dire s'il est supérieur ou non

2- Dans u cas réel, nous voulons connaître à quelle tranche d'âge nous sommes
Les tranches d'âges possibles :
    - poussin : 0 à 7 ans
    - junior : 8 à 14 ans
    - senior : 15 à 20 ans
    - adulte : 21 à 40 ans
    - vieux : 41+ ans

3- Imaginons que nous avons trois classes (chat, chien et lion). Pour une valeur saisie par l'user
 nous voulons lui situer
    - 0 : Pour le chat
    - 1 : Pour le chien
    - 2 : Pour le lion

*/

int main()
{
    int age = 15; // Ceci n'est pas mon âge réel, je vous vois venir...lol
    int choice;
    double number1 = 1.3, number2 = 2.5;

    // 1 cas if-else et ternaire
    if(number1 > number2)
        printf("Le nombre %0.2lf est supérieur à %0.2lf\n", number1, number2);
    else
        printf("Le nombre %0.2lf est inférieur à %0.2lf\n", number1, number2);

    printf("\n=========================================================\n");
    number1 > number2 ? printf("%0.2lf est supérieur a %0.2lf\n", number1, number2) : printf("%0.2lf inférieur a %0.2lf\n", number1, number2);

    printf("\n=========================================================\n");
    // 2 cas ; if imbriqués
    if (age >= 0 && age <= 7)
        printf("Vous êtes un poussin\n");
    else if (age >= 8 && age <= 14)
        printf("Vous êtes un junior\n");
    else if (age >= 15 && age <= 20)
        printf("Vous êtes un senior\n");
    else if (age >= 21 && age <= 40)
        printf("Vous êtes un adulte\n");
    else if (age >= 41)
        printf("Vous êtes un vieux\n");

    // 3 cas switch
    printf("\n=========================================================\n");
    printf("\nEntrez un chiffre entre 0 et 2 : ");
    // Fonction qui permet de demander une saisie à l'utilisateur
    // Elle prend en second paramètre l'adresse memoire de la variable...on en parlera plus tard avec les pointeur
    scanf("%d", &choice);
    switch(choice) {
        case 0:
            printf("Vous êtes un chat\n");
            break;
        case 1:
            printf("Vous êtes un chien\n");
            break;
        case 2:
            printf("Vous êtes un lion\n");
            break;
        default:
            printf("Mauvais choix\n");
    }

    
    return 0;
}
