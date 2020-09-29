# Exercice 2

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

Il faut écrire la fonction `encode_contact`. Celle-ci doit permettre l'encodage d'une structure contact en vérifiant les données fournie par l'utilisateur.


## Contraintes sur les données
Les données doivent respecter les conditions suivantes :
- Le nom doit uniquement être composé des caractères de A à Z et de a à z.
- Le prénom doit uniquement être composé des caractères de A à Z et de a à z.
- L'adresse ne possède aucune contrainte particulière.
- Le numéro ne peut être composé que de chiffre et des caractères de A à Z.
- Le code postal est une valeur numérique comprise entre 1000 et 9999.
- La localité doit uniquement être composé des caractères de A à Z et de a à z.
- La date de naissance doit être une date valide.

## Notes complémentaires
- Il est conseillé d'écrire des fonctions supplémentaires pour tester les valeurs.
- La fonction `scanf` lors de la saisie d'une chaîne de caractères coupe entre les espaces.
- Penser à l'utilisation de `fgets` pour saisir une chaîne.
- La bibliothèque `ctype.h` renferme des fonctions utiles pour réaliser des tests : [voir les références](https://www.tutorialspoint.com/c_standard_library/ctype_h.htm)
- Votre fonction de saisie ne doit comporter **aucun** affichage même pour poser la question à l'utilisateur.
- Les données sont fournies dans cet ordre à votre programme :
	1. Nom
	1. Prénom
	1. rue
	1. Numéro
	1. Localité
	1. Code postal
	1. Date de naissance

@[Encode contact]({"stubs": ["encode_struct.h"],"command": "sh /project/target/run.sh test_encode_struct","project": "encode_struct"})