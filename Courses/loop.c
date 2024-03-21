#include <stdio.h>

int main()
{
    int a = 14;
    int b = a;
    
    do {
        printf("%d\n", b);
    } while(a != b); // a n'est pas différent de b
    printf("\n=================================\n");

    for(unsigned int i = 6; i > 0; i--)
        printf("Je suis bien une boucle\n");

    printf("\n=================================\n");
    
    while (a >= 6) {
        printf("%d\n", a);
        a--;
    }
    printf("\n=================================\n");

    // Utilistaion de break et continue
    while (b >= 6) {
        printf("%d\n", b);
        if(b == 10)
            break;
        b--;
    }
    printf("\n=================================\n");
    
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
            continue; // Ignorer les nombres pairs
        printf("%d ", i); // Sortie : 1 3 5 7 9
    }

    return 0;
}