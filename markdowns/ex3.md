# Exercice 3

Les structures suivantes sont définies :

```c 
struct date {
	int jour;
	int mois;
	int annee;
}

struct contact {
	char nom[20];
	char prenom[20];
	char adresse[100];
	char numero[10];
	char localite[50];
	int CP;
	struct date naissance;
}
```

Il faut écrire une fonction `compare_contact`. Cette fonction doit comparer les 2 structures contact qui lui sont passées en argument. Elle renvoie :
- 1 si la première structure est la plus petite.
- 0 si les structure sont égales.
- -1 si la première structure est la plus grande.

L'ordre des structures est déterminé par :
1. l'ordre alphabétique des noms
1. l'ordre alphabétique des prénoms
1. l'ordre croissant des dates de naissances

## Exemple

Si nous avons des structures contenant 

1. Dupond Jean 15/08/1965
1. Dupond Jean 15/08/1965
	
La structure 1 et la structure 2 sont égales.

Si nous avons des structures contenant 

1. Dupond Jean 15/08/1975
1. Dupond Jean 15/08/1965
	
La structure 2 vient avant la structure 1.

Si nous avons des structures contenant 

1. Durand Emile 15/08/1975
1. Dupond Jean 15/08/1965
	
La structure 2 vient avant la structure 1.

@[Compare contact]({"stubs": ["compare.h"],"command": "sh /project/target/run.sh test_compare","project": "compare"})

