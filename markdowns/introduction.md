# Les types strcuturés

## Définition d'un nouveau type structuré

Le mot-clé `struct` est utilisé pour définir un type structuré (on dira plus simplement "une structure").

L'exemple donné ci-après définit un nouveau type structuré `struct date`. 

```c 
struct date {
   int jour;
   int mois;
   int annee;
}
```

La structure définie ci-dessus est composée de 3 parties. Il s'agit de 3 variables entière nommées `jour`, `mois` et `annee`.

Chaque "partie" de la structure s'appelle un "champ". De sorte que la structure de type `struct date` définie ci-dessus possède 3 champs de type int nommés  `jour`, `mois` et `annee`.

## Déclaration d'une variable de type structuré

Pour déclarer une variable de type `struct`, il faut :
- Que le type ait été défini précédemment (cf. partie *Définition* ci-dessus);
- Et utiliser la syntaxe ci-après.

```c
struct date creation;
```

La syntaxe ci-dessus déclare une variable nommée `creation` qui est du type `struct date`.

## Affectation

Pour accéder aux champs d'une variable de type `struct`, on utilise l'opérateur `.` :

### Affectation d'une valeur à un champ d'une structure
```c
creation.jour = 5;
creation.mois = 8;

printf("choisir l'annee : ");
scanf("%d", &creation.annee);
```
(Si creation est définie comme ci-dessus.)

### Lecture d'une valeur dans un champ d'une structure
```c
printf("date de creation : %d/%d/%d\n",creation.jour, creation.mois, creation.annee);
```
(Si creation est définie et initialisée comme ci-dessus.)

## L'exemple complet :

```c 
#include <stdio.h>
#include <stdlib.h>

struct date {
	int jour;
	int mois;
	int annee;
}

int main() {
   struct date creation;

   creation.jour = 5;
   creation.mois = 8;
   
   printf("choisir l'annee : ");
   scanf("%d", creation.annee);
   
   printf("date de creation : %d/%d/%d\n",creation.jour, creation.mois, creation.annee);

   return 0;
}

```
