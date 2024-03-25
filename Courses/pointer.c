#include <stdio.h>

/* 
[Variables]
    nom_var     : Valeur de la variable
    &nom_var    : Adresse de la variable

[Ecrire son pointeur]
    nom_point   : Adresse de la variable pointée
    *nom_point  : Valeur de la variable pointée
    &nom_point  : Adresse du pointeur lui-même

    *nom_point = NULL -> crée un pointeur null 
*/

// On peut également passer un pointeur comme paramètre de nos fonctions et ou procédures;
void inverse(long int *pt_a, long int *pt_b) {
    long int temp = 0;
    temp = *pt_b;
    *pt_b = *pt_a;
    *pt_a = temp;
}

int main()
{
    // Voici nos trois entiers (une déclaration des variables)
    long int a, b;
    long int *point_a = &a, *point_b = &b;

    // On affecte a sa valeur puis à b la valeur de a
    a = 12;
    b = a;
    printf("a = %lu\n", a); // %lu : ne prendra pas en compte les entiers négatifs
    printf("b = %lu\n", b);

    printf("\n\n===============================================================\n\n");
    // On modifie la valeur de b pour voir si a sera également affecter
    b = 25;
    printf("b = %ld\n", b); // Affiche 6
    printf("a = %ld\n", a); // Affiche 12, a reste inchangé

    printf("\n\n===============================================================\n\n");
    printf("a est : %ld\n", a);
    printf("L'adresse de a est : %p\n", point_a);
    printf("L'adresse de b est : %p\n", (void *)point_b); // Une autre façon de faire
    printf("Valeur du pointeur de a : %ld\n", *point_a);

    printf("\n\n===============================================================\n\n");

    *point_a = -33;
    printf("a devient maintenant : %ld\n", a); // Affiche : -33
    printf("Valeur du pointeur de a : %ld\n", *point_a); // Affiche : -33

    printf("\n\n===============================================================\n\n");
    printf("a est : %ld et b est : %ld\n",a, b); // a : -33 et b : 25
	inverse(point_a, point_b); // On passe en argument sans le '*', très important
	printf("MAINTETANT a est : %ld et b est : %ld\n",a, b); // a : 12 et b : 25

    return 0;
}
