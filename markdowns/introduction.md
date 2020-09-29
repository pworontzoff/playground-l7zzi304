# Rappel

## Définition

Le mot-clé `struct` est utilisé pour définir une structure. Un exemple est donnée ci-après. 

```c 
struct date {
	int jour;
	int mois;
	int annee;
}
```

La structure définie ci-dessous en composée de 3 parties. Il s'agit de 3 variables entière nommée `jour`, `mois` et `annee`.

## Déclaration

Pour déclarer une variable de type `struct`, il faut 
- que le type ai été défini précédemment
- et utiliser la syntaxe ci-après.

```c
struct date creation;
```

La syntaxe ci-dessus déclare une variable nommée `creation` qui est du type `struct date`.

## Affectation

Pour affecter ou accéder au contenu d'une variable de type `struct`, il existe 2 syntaxes selon que la variable est un point ou non.

### Variable
```c
//Si creation est un variable simple

creation.jour = 5;
creation.mois = 8;
creation.annee = 1985;
```

Pour accéder à chaque partie de la structure, on utilise l'opérateur `.`.

### Pointeur

```c
//Si creation est un pointeur

creation->jour = 5;
creation->mois = 8;
creation->annee = 1985;
```

Pour accéder à chaque partie de la structure, on utilise l'opérateur `->`.