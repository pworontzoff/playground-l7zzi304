#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "encode_struct.h"

void affiche_contact(struct contact personne) {
	printf("%s %s\n",personne.nom, personne.prenom);
	printf("%s %s\n",personne.adresse, personne.numero);
	printf("%d %s\n",personne.CP, personne.localite);
	printf("Date de naissance: %02d/%02d/%d\n",personne.naissance.jour, personne.naissance.mois,personne.naissance.annee);
}

int main() {
  struct contact personne;

  encode_contact(&personne);
  affiche_contact(personne);

  printf("\n");
  return 0;
}
