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

void encode_contact(struct contact *personne) {
	//Ecrire le code de la fonction
}