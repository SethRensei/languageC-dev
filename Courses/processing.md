# Préprocesseur et étape du préprocesseur en C

Le préprocesseur en C est un programme qui traite votre code source avant que le compilateur proprement dit ne prenne le relais. Il effectue un ensemble de transformations textuelles et d'opérations basées sur des directives spéciales qui commencent par le symbole #. Ces directives incluent, par exemple, `#define`, `#include`, `#ifdef`, `#ifndef`, `#endif`, et bien d'autres. L'étape du préprocesseur est donc la première étape du processus de compilation, intervenant avant la compilation et l'édition de liens proprement dites.

## Quelques Fonctionnalités Clés du Préprocesseur
- Inclusion de fichiers (`#include`) : Permet d'inclure le contenu d'un autre fichier dans le fichier source actuel. C'est ainsi que les fichiers d'en-tête (.h) sont inclus dans les fichiers sources (.c), permettant de partager des déclarations de fonctions, des prototypes, des définitions de macros, etc., entre différents fichiers.

- Définition de macros (`#define`) : Utilisée pour définir des macros qui sont essentiellement des fragments de code qui seront substitués dans le programme avant la compilation. Les macros peuvent être utilisées pour définir des constantes ou des fonctions simplifiées sous forme d'expressions inline.

- Conditionnels de compilation (`#ifdef`, `#ifndef`, `#endif`, `#else`, `#elif`) : Permettent de compiler conditionnellement certaines parties du code en fonction de la définition ou non de certaines macros. Cela est utile pour rendre le code source plus adaptable à différents environnements ou configurations de compilation.

## L'Étape du Préprocessing
Lors de l'étape du préprocessing, le préprocesseur examine le code source ligne par ligne à la recherche de directives indiquées par `#`. Lorsqu'il en trouve une, il effectue l'opération demandée, comme l'inclusion d'un fichier ou la substitution d'une macro. Le résultat est un fichier source transformé, généralement maintenu en mémoire ou stocké dans un fichier temporaire, qui est ensuite passé au compilateur pour la prochaine étape du processus de compilation.

Cette étape est cruciale car elle prépare le code pour la compilation en résolvant les références aux fichiers d'en-tête, en configurant les macros et en conditionnant la compilation, ce qui peut affecter non seulement la façon dont le code est compilé, mais aussi quels morceaux de code sont compilés.

## Exemple (Illustration)
En considérant le code suivant :
```c
#include <stdio.h>
#define PI 3.14159

int main() {
    printf("La valeur de PI est %f\n", PI);
    return 0;
}
```
- L'instruction `#include <stdio.h>` demande au préprocesseur d'inclure le contenu du fichier d'en-tête standard `stdio.h`, qui contient, entre autres, la déclaration de la fonction printf.
- `#define PI 3.14159` définit une macro nommée `PI` qui sera remplacée par `3.14159` partout où `PI` apparaît dans le code avant que le compilateur ne commence à compiler le code.
- Après le preprocessing, le compilateur travaille sur un code où tous les `#include` ont été remplacés par leur contenu correspondant et toutes les instances de `PI` ont été remplacées par `3.14159`. Ce traitement initial simplifie le travail du compilateur en résolvant ces références et définitions à l'avance.

### **`Nb`** Bon à savoir 
