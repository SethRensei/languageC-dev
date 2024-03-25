Ce dossier nous permettra d'avoir les bases du langage, afin que chacun soit capable d'écrire et comprende au minimum du code.

# Les bases du langage C
Comme toute chose, nous allons commencer par voir les bases du langage avant de voir les notions avancées qui y sont rattachées

## Les variables
*Voir le fichier variable1.c*
- Une variable en programmation est une zone (espace) mémoire susceptible d'être changée
- En C pour une variable doit obligatoirement être précédée par son type (*`int`*, *`char`*, *`float`*, etc...). Par défaut une variable est signée (signed).
- Ce qu'il faudra retenir dans ce cas qui ne s'applique pas à certains langages de programmation (je pense ici au Python), 3 concepts différents
    - La déclaration : Juste donner le type et le nom de la variable
    - L'initialisaton : Déclaration + attribution d'une valeur
    - L'affectation : Attribution d'une valeur bien après la déclaration ou l'initialisation

## Les opérateurs
*Voir le fichier operator.c*

Comme dans la mathétique, il nous est impossible de faire des calculs en utilisant des opérateurs arithmétiques.
### Opérateurs classiques
- `+` : Addition
- `-` : Soustraction
- `*` : Multiplication
- `/` : Division
- `%` : Modulo (le reste d'une division)
### Autres opérateurs
- `+=` x : Ajout x à la variable
- `-=` x : Retire x à la variable
- `*=` x : Multiplie x à la variable
- `/=` x : Divise x à la variable
### Incrémentation et décrémentation
Ceci revient respectivement de faire +1 et -1 à la variable
- `x++` : Post incrémentation => x = x + 1 ou x += 1
- `++x` : Pré incrémentation => x = x + 1 ou x += 1
- `x--` : Post décrémentation => x = x - 1 ou x -= 1
- `--x` : Pré décrémentation => x = x - 1 ou x -= 1

Nb : Les opérations de post et de pré ont un fonctionnement différent dans le code et dans sa logique.

## Tests ou Conditions
*Voir le fichier tests.c*
- En programmation, un test ou une condition fait référence à une instruction qui permet de prendre une décision basée sur une évaluation booléenne.
- Une condition est généralement exprimée sous la forme d'une expression qui peut être évaluée comme vraie ou fausse.
- Les tests et les conditions sont largement utilisés pour contrôler le flux d'exécution d'un programme. Ils permettent au programmeur de définir des chemins d'exécution différents en fonction de certaines conditions.
### Opérateurs de comparaisons et opérateurs logiques
- Les opérateurs de comparaisons
    - `==` : Égal à
    - `!=` : Différent de
    - `<` : Inférieur à
    - `>` : Supérieur à
    - `<=` : Inférieur ou égal à
    - `>=` : Supérieur ou égal à
- Les opérateurs logiques
    - `&&` : Et ; toutes les conditions doivent être vraies.
    - `||` : Ou ; l'une des conditions doit être vraie.
    - `!` : Ne pas (n'est pas) ; vérifie la condition contraire
### Structures de contrôle conditionnelles
- `if` : L'instruction if permet d'exécuter un bloc de code si une condition est vraie. Elle peut être suivie d'une ou plusieurs instructions `else if` (ou `elif` dans certains langages) pour tester plusieurs conditions en cascade, ainsi que d'une instruction `else` pour exécuter un bloc de code lorsque toutes les conditions précédentes sont fausses.
- `switch` (ou case) : Dans certains langages, comme C, C++, Java, etc., l'instruction `switch` est utilisée pour sélectionner l'exécution d'un des nombreux blocs de code basés sur la valeur d'une expression.

Nb : Une condition ternaire, également appelée opérateur ternaire, est une façon concise d'écrire une condition en une seule ligne dans de nombreux langages de programmation. Elle permet d'effectuer un test et de retourner une valeur basée sur ce test, tout cela en une seule instruction.

Syntaxe
> (condition) ? valeur_si_vraie : valeur_si_fausse;

## Boucles
*Voir le fichier loop.c*

- Ici boucle est une structure qui permet d'exécuter un bloc de code plusieurs fois de manière répétée. Cela permet d'automatiser des tâches répétitives ou de traiter une série d'éléments de données de manière efficace.
- En C comme dans certains langages de programmation(c++, javascript, java, php), il existe trois types de boucles sauf en python.
    - `while` : Exécute le bloc plusieurs fois si la condition est vraie
    - `do-while` : Exécute une première fois le code avant de vérifier la condition pour les autres tours.
    - `for` : Exécute un bloc de code selon un nombre d'itérations ; elle est plus utilisée pour le parcours des séquences de données (ex: tableaux, listes, containers).

Nb : Une boucle infinie s'arrêtera en mettant en place des conditions d'arrêt ou des événements (plus dans la programmation graphique).

- Quelques mots clés :
    - `break` : est souvent utilisé pour sortir d'une boucle lorsque certaines conditions sont remplies ou lorsqu'un événement spécifique se produit. Par exemple, lors de la recherche d'un élément dans un tableau ou lorsque la boucle doit s'arrêter prématurément pour une raison quelconque, ou encore quitter un cas dans un `switch` pour ne pas exécuter les cas qui suivent.
    - `continue` : est utile lorsque vous souhaitez ignorer certaines itérations de la boucle en fonction de conditions spécifiques, mais `continue` d'exécuter la boucle pour les autres itérations. Par exemple, lors du filtrage d'éléments dans un tableau ou lors de la saut des itérations pour certaines valeurs de l'indice.

**Remarque** : Pour les conditions et les boucles, si nous avons qu'une seule ligne de code à écrire dans la condition ou la boucle, les accolades `{}` sont facultatives. 

## Fonctions et procédures
*Voir le fichier functions.c*

### Fonctions
- Une fonction est une portion de code qui effectue une tâche spécifique et retourne une valeur à l'endroit où elle a été appelée.
- Elle prend généralement des arguments en entrée, les traités selon l'algorithme défini à l'intérieur de la fonction, puis retourne un résultat.
- Les fonctions sont utilisées pour encapsuler un bloc de code réutilisable et modulaire, permettant ainsi de segmenter le code en fonctionnalités distinctes et de les appeler lorsque nécessaire.
- En programmation, les fonctions sont utilisées pour effectuer des calculs, des opérations de traitement des données ou d'autres tâches spécifiques.
### Procédures
- Une procédure est également une portion de code qui effectue une tâche spécifique, mais elle ne retourne pas de valeur à l'endroit où elle a été appelée.
- Contrairement à une fonction, une procédure peut modifier les données en mémoire sans nécessairement retourner un résultat explicite. Par exemple, une procédure pourrait être utilisée pour afficher des informations à l'écran, effectuer des opérations d'entrée-sortie ou mettre à jour des variables globales.

### Résumé sur la différence fonction-procédure
- En résumé, la principale différence entre une fonction et une procédure réside dans le fait que les fonctions retournent une valeur, tandis que les procédures ne le font pas et sont principalement utilisées pour effectuer des actions ou des opérations sans nécessiter de résultat de retour explicite.
- Les noms de fonctions se verront être précédés par un type (`int`, `float`, `double`, `char`, `bool`, etc), et doit contenir à sa fin un `return` selon le type de la fonction.
- Les noms de procédures seront précédés par un `void` car on n'attend pas de valeur de retoure.
### Prototypes de fonctions ou procédures
- Le prototype de fonction ou de procédure est la défintion de sa signature, sans en détailler l'implémentation.
- L'implémentation du prototype pourra ce faire à la fin du programme ou encore dans un fichier séparé du fichier source (ou se trouve la fonction `int main`).
#### Utilité des Prototypes
- `Vérification de type` : Ils permettent au compilateur de vérifier que les fonctions et les procédures sont appelées avec les bons types et le bon nombre d'arguments, notamment ainsi les erreurs de type.
- `Séparation de la déclaration et de l'implémentation` : Les prototypes permettent de séparer la déclaration des fonctions et des procédures de leur implémentation, ce qui facilite la modularité du code et sa compréhension.
- `Liaisone anticipée` : Ils permettent également la liaison des appels de fonctions à leur définition avant l'exécution du programme, ce qui peut contribuer à optimiser et sécuriser le code.

**Remarque :** Dans un projet, on doit avoir qu'un seul fichier ayant la fonction principale (l'entrée de l'application). Généralement ce fichier est nommé **`main.c`**


## Revue sur les variables
*Voir le fichier variable2.c*

Comme nous avons déjà vu les variables, ici nous aborderons le point concernant la portée de variable et aussi sur les constantes.

### Variables locales et variables globales
De façon simple, on s'attardera uniquement sur la portée, la durée de vie et la visibilité de cette dernière.
#### Variables locales
- **`Portée (Scope)`** : Une variable locale est accessible uniquement à l'intérieur de la fonction ou du bloc où elle a été déclarée. Sa visibilité est donc limitée au contexte dans lequel elle a été créée.
- **`Durée de vie`** : Elle existe uniquement pendant que le bloc de code ou la fonction qui la contient est en cours d'exécution. Une fois que le bloc ou la fonction se termine, la variable locale est détruite.
- **`Visibilité`** : Une variable locale n'est visible que dans le bloc de code ou la fonction où elle a été déclarée. Elle ne peut pas être utilisée en dehors de ce contexte.
#### Variables globales
- **`Portée (Scope)`** : Une variable globale est accessible depuis n'importe quel point du programme, après sa déclaration. Cela signifie qu'elle peut être utilisée aussi bien à l'intérieur des fonctions ou des procédures qu'à l'extérieur de celles-ci.
- **`Durée de vie`** : La durée de vie d'une variable globale s'étend pendant toute l'exécution du programme. Elle est créée lorsque le programme commence et est détruite seulement lorsque le programme se termine.
- **`Visibilité`** : Du fait de sa portée globale, cette variable est visible partout dans le code (à moins qu'elle ne soit masquée par une variable locale du même nom dans une fonction ou une procédure).
#### Résumé et Considérations
- **`Isolation`** : Les variables locales sont isolées des autres fonctions, ce qui réduit les risques d'erreur dues à des modifications inattendues de variables partagées (un problème fréquent avec les variables globales).
- **`Sécurité et Clarté`** : L'utilisation de variables locales favorise une programmation plus sûre et plus claire, où les dépendances entre différentes parties du code sont minimisées.
- **`Utilisation`** : Tandis que les variables globales peuvent être utiles pour partager des informations entre différentes fonctions sans avoir à passer ces informations en tant qu'arguments, leur usage est généralement découragé dans la conception de logiciels modernes en raison des problèmes de sécurité, de testabilité, et de clarté du code qu'elles peuvent introduire. La programmation fonctionnelle et la programmation orientée objet préconisent des approches qui minimisent l'usage des variables globales.
### Constantes
Une constante comme on le sait tous est une valeur qui ne change pas (immuable), c'est de même en programmation, donc essayer de modifier la valeur d'une variable dit constante entraînera une erreur dans notre programme (code). Nous ferons ici deux façon bien spécifique de faire une variable constante.
#### Types de constantes
- `#define` préprocesseur : Permet de définir des constantes de préprocesseur. Ce mécanisme remplace simplement le nom de la constante par sa valeur lors de la précompilation.
- `const` qualifier : Utilisé pour déclarer des variables dont la valeur ne doit pas être modifiée après leur initialisation.
#### Avantages de l'Utilisation des Constantes
- `Lisibilité` : Les constantes rendent le code plus lisible. Par exemple, PI est beaucoup plus compréhensible que 3.14159 dispersé dans le code.
- `Maintenance` : Si une valeur doit être changée, elle peut être modifiée à un seul endroit, réduisant ainsi le risque d'erreurs.
- `Optimisation` : L'utilisation de constantes peut aider le compilateur à optimiser le code généré.
#### Utilisation des Constantes en C
Voici comment vous pouvez utiliser les constantes en C pour améliorer votre code :

- Utilisez `#define` pour les constantes simples dont la valeur est connue avant la compilation (préprocessing).
- Utilisez `const` pour les variables dont la valeur ne doit pas être modifiée après leur initialisation. Cela est particulièrement utile pour les paramètres de fonction, indiquant que la fonction ne modifiera pas la valeur du paramètre.

*Nb* : Il est recommandé d'écrire le nom des constantes en majuscule (surtout avec #define), on peut toute fois y ajouter un underscore (_).

**Remarque :** Pour comprendre parfaitement ce que fait le procésseur et le préprocessing, je vous invite à lire le fichier *processing.md*

## Les pointeurs
*Voir le fichier pointer.c*

Avant d'entrer dans le vif du sujet, il important de savoir que la notion des pointeurs en programmation n'est pas facile de l'appréhender pour les débutants... Je vous conseillerai de relire à plus reprises cette partie si elle vous semble bien complexe. Notons aussi son importance dans ce langage.

- Un pointeur n'est autre qu'une variable, mais comme son nom l'indique, le pointeur va pointer vers une variable plus précisement pointer (faire référence) vers l'adresse d'une variable.
- Étant donné que va fonction est de faire référence à l'adresse d'une variable, il a donc accès à l'adresse de la variable à laquelle il pointe et non va valeur (contenu de la variable).
- Comme le pointeur possède l'adresse d'une variable (n'oublions pas qu'en programmation une variable occupe une adrésse mémoire dans notre machine), ce qui revient à dire qu'affecter une nouvelle valuer à notre pointeur modifiera automatiquement la valeur de notre variable, de cause que le pointeur possède un accès  direct à son adresse.

Exemple : Imaginions que vous avez un appartement, il est naturel que vous possédiez les clés de l'apparte. De l'autre côté je possède aussi les clés de votre apparte, si derrière vous je venais à modifier la position de la table à manger, à votre retour vous allez constater cette modification, ma modification existe car j'ai un accès direct. 
Pour faire court et bref, à l'appel (votre retour) de la variable la valeur sera modifiée.
### Affectation et accès
- `&` : Ce symbole est un opérateur d'adresse nous permetta d'avoir accès à l'adresse d'une variable, nous allons l'utiliser pour affecter un pointeur l'adresse d'une variable.
- `*` : Ce symoble est un opérateur d'indirection ou de déférencement nous permettra d'accéder à la valeur de la variable, mais sans utiliser ce symbole on aura accès à l'adresse mémoire de la variable. Ce symbole permettra également de spécifier qu'une variable est un pointeur dès sa déclaration ou son initialisation.

Par là, vous allez toujours finir par utiliser des pointeurs, même sans le savoir *[spoil : un tableau est un pointeur]*, etc.
En résumé, les pointeurs sont un outil fondamental en C qui, utilisés correctement, permettent une manipulation efficace et flexible de la mémoire. Toutefois, ils requèrent une compréhension approfondie et une grande attention pour éviter les erreurs.