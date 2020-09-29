# Exercice 1

Les structures suivantes sont définies :

```c 
struct date {
	int jour;
	int mois;
	int annee;
};

struct contact {
	char nom[20];
	char prenom[20];
	char adresse[100];
	char numero[10];
	char localite[50];
	int CP;
	struct date naissance;
};
```

Il faut écrire la fonction `affiche_contact`. Celle-ci doit afficher la structure contact qui lui est passée en argument en respectant le format suivant :

```html
Dupond Jean
rue des allouettes 502
1000 Bruxelles
Date de naissance: 06/12/1945
```
**Remarque:** Pour affichage de la date les zéros initiaux pour les jours et mois doivent apparaître. La syntaxe suivant peut être utilisée dans le `printf` : `%02d`. Cela signifie qu'on affiche au moins 2 caractères qui sont des 0.

```C runnable
#include <stdlib.h>
#include <stdio.h>

int main() {
	
	printf("%05d\n",123);
	printf("%02d\n",5);
	printf("%02d\n",12);

	return 0;
}
```

@[Affiche contact]({"stubs": ["aff_struct.h"],"command": "sh /project/target/run.sh test_aff_struct","project": "aff_struct"})