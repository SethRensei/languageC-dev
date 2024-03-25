#include <stdio.h>

// Une fonction qui calcul la somme de deux entiers
int sum(int a, int b) {
    return a + b;
}

// Le prototype de la procédure showMsg
void showMsg(int a);

/* 

Ne vous en faites pas pour les types long int et int, il n'y a pas de différence majeur pour le compilateur,
la différence ne réside par dans le type en soi, mais dans la plage des valeurs possibles. En effet un long int
est tout simplement un int, les deux sont des entiers pour la machine, le compilateur, etc...

*/

int main() {
    int a = 10;
    int b = 20;

    // Fonctionne, car on utilise la valeur de retour de la fonction sum
    // afin de le passer en argument de notre procédure showMsg
    showMsg(sum(a, b));

    a += 3;

    int c = sum(a, b);

    showMsg(c);

    return 0;
}

// Implémentation de la procédure showMsg
void showMsg(int a) {
    printf("La somme des deux nombres est : %d\n", a);
}