#include <stdio.h>


int main()
{
    int number1 = 15, number2 = -3;
    int sum, sub, mult, mod;
    float div;

    // Oérations classiques
    sum = number1 + number2;
    div = number1 / number2;
    sub = number1 - number2;
    mult = number1 * number2;
    mod = number1 % number2;

    printf("La somme est : %d", sum);
    printf("\nLa division est : %f", div);
    printf("\nLa soustraction est : %d", sub);
    printf("\nLa multiplication est : %d", mult);
    printf("\nLe reste de la division est : %d", mod);

    // Autres opérations
    number1 -= 5;
    number2 *= 15;
    div /= -3.2;

    printf("\n\n");
    printf("Nouvelle valeur de number1 : %d", number1);
    printf("\nNouvelle valeur de number2 : %d", number2);
    // On prendra que 2 chiffre après la virgule
    printf("\nNouvelle valeur de div : %0.2f", div);

    // Incrémentatin et décrémentatin
    number1 = 4; number2 = 6;
    // 
    number1++; number2--;
    sum = number1 + number2; // 4 + 6 = 10

    printf("\n\n");
    printf("Nouvelle valeur de number1 : %d", number1); // 5
    printf("\nNouvelle valeur de number2 : %d", number2); // 5
    printf("\nLa somme donne : %d", sum);
    
    // Le nombre sera d'abord mise à jour avant toute opération
    ++number1;
    sum = number1 + number2; // 6 + 5 = 11

    printf("\n\n");
    printf("Nouvelle valeur de number1 : %d", number1); // 6
    printf("\nNouvelle valeur de number2 : %d", number2); // 5
    printf("\nLa somme donne : %d", sum);

    return 0;
}
