Ce dossier nous permettra d'avoir les bases du langage, afin que chacun soit capable d'écrire et comprende au minimum du code.

# Les bases du langage C
Comme toute chose, nous allons commencer par voir les bases du langage avant de voir les notions avancées qui y sont rattachées

## Les variables
- Une variable en programmation est une zone (espace) mémoire susceptible d'être changée
- En C pour une variable doit obligatoirement être précédée par son type (*int*, *char*, *float*, etc...). Par défaut une variable est signée (signed).
- Ce qu'il faudra retenir dans ce cas qui ne s'applique pas à certains langages de programmation (je pense ici au Python), 3 concepts différents
    - La déclaration : Juste donner le type et le nom de la variable
    - L'initialisaton : Déclaration + attribution d'une valeur
    - L'affectation : Attribution d'une valeur bien après la déclaration ou l'initialisation

## Les opérateurs
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