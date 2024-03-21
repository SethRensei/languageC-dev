Ce dossier nous permettra d'avoir les bases du langage, afin que chacun soit capable d'écrire et comprende au minimum du code.

# Les bases du langage C
Comme toute chose, nous allons commencer par voir les bases du langage avant de voir les notions avancées qui y sont rattachées

## Les variables
*Voir le fichier variable.c*
- Une variable en programmation est une zone (espace) mémoire susceptible d'être changée
- En C pour une variable doit obligatoirement être précédée par son type (*int*, *char*, *float*, etc...). Par défaut une variable est signée (signed).
- Ce qu'il faudra retenir dans ce cas qui ne s'applique pas à certains langages de programmation (je pense ici au Python), 3 concepts différents
    - La déclaration : Juste donner le type et le nom de la variable
    - L'initialisaton : Déclaration + attribution d'une valeur
    - L'affectation : Attribution d'une valeur bien après la déclaration ou l'initialisation

## Les opérateurs
*Voir le fichier operator.c*

Comme dans la mathétique, il nous est impossible de faire des calculs en utilisant des opérateurs arithmétiques.
### Opérateurs classiques
- Addition    : (+) ; plus
- Soustration : (-) ; moins
- Division    : (/) ; slash
- Multiplication : (*) ; astérix
- Modulo         : (%) ; pourcent
### Autres opérateurs
- += x : Ajout x à la variable
- -= x : Retire x à la variable
- *= x : Multiplie x à la variable
- /= x : Divise x à la variable
### Incrémentation et décrémentation
Ceci revient respectivement de faire +1 et -1 à la variable
- x++ : Post incrémentation => x = x + 1 ou x += 1
- ++x : Pré incrémentation => x = x + 1 ou x += 1
- x-- : Post décrémentation => x = x - 1 ou x -= 1
- --x : Pré décrémentation => x = x - 1 ou x -= 1

Nb : Les opérations de post et de pré ont un fonctionnement différent dans le code et dans sa logique.

## Tests ou Conditions
*Voir le fichier tests.c*
- En programmation, un test ou une condition fait référence à une instruction qui permet de prendre une décision basée sur une évaluation booléenne.
- Une condition est généralement exprimée sous la forme d'une expression qui peut être évaluée comme vraie ou fausse.
- Les tests et les conditions sont largement utilisés pour contrôler le flux d'exécution d'un programme. Ils permettent au programmeur de définir des chemins d'exécution différents en fonction de certaines conditions.
### Opérateurs de comparaisons et opérateurs logiques
- Les opérateurs de comparaisons
    - == : Égal à
    - != : Différent de
    - < : Inférieur à
    - \> : Supérieur à
    - <= : Inférieur ou égal à
    - \>= : Supérieur ou égal à
- Les opérateurs logiques
    - && : Et ; toutes les conditions doivent être vraies.
    - || : Ou ; l'une des conditions doit être vraie.
    - ! : Ne pas (n'est pas) ; vérifie la condition contraire
### Structures de contrôle conditionnelles
- if : L'instruction if permet d'exécuter un bloc de code si une condition est vraie. Elle peut être suivie d'une ou plusieurs instructions else if (ou elif dans certains langages) pour tester plusieurs conditions en cascade, ainsi que d'une instruction else pour exécuter un bloc de code lorsque toutes les conditions précédentes sont fausses.
- switch (ou case) : Dans certains langages, comme C, C++, Java, etc., l'instruction switch est utilisée pour sélectionner l'exécution d'un des nombreux blocs de code basés sur la valeur d'une expression.

Nb : Une condition ternaire, également appelée opérateur ternaire, est une façon concise d'écrire une condition en une seule ligne dans de nombreux langages de programmation. Elle permet d'effectuer un test et de retourner une valeur basée sur ce test, tout cela en une seule instruction.

Syntaxe
> (condition) ? valeur_si_vraie : valeur_si_fausse;

## Boucles
*Voir le fichier loop.c*

- Ici boucle est une structure qui permet d'exécuter un bloc de code plusieurs fois de manière répétée. Cela permet d'automatiser des tâches répétitives ou de traiter une série d'éléments de données de manière efficace.
- En C comme dans certains langages de programmation(c++, javascript, java, php), il existe trois types de boucles sauf en python.
    - while : Exécute le bloc plusieurs fois si la condition est vraie
    - do-while : Exécute une première fois le code avant de vérifier la condition pour les autres tours.
    - for : Exécute un bloc de code selon un nombre d'itérations ; elle est plus utilisée pour le parcours des séquences de données (ex: tableaux, listes, containers).

Nb : Une boucle infinie s'arrêtera en mettant en place des conditions d'arrêt ou des événements (plus dans la programmation graphique).

- Quelques mots clés :
    - break : est souvent utilisé pour sortir d'une boucle lorsque certaines conditions sont remplies ou lorsqu'un événement spécifique se produit. Par exemple, lors de la recherche d'un élément dans un tableau ou lorsque la boucle doit s'arrêter prématurément pour une raison quelconque, ou encore quitter un cas dans un switch pour ne pas exécuter les cas qui suivent.
    - continue : est utile lorsque vous souhaitez ignorer certaines itérations de la boucle en fonction de conditions spécifiques, mais continue d'exécuter la boucle pour les autres itérations. Par exemple, lors du filtrage d'éléments dans un tableau ou lors de la saut des itérations pour certaines valeurs de l'indice.

**Remarque** : Pour les conditions et les boucles, si nous avons qu'une seule ligne de code à écrire dans la condition ou la boucle, les accolades `{}` sont facultatives. 
