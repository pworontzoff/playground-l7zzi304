#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aff_struct.h"

int main() {
  struct contact personne;

  fgets(personne.nom,20,stdin);
  personne.nom[strlen(personne.nom)-1]='\0';

  fgets(personne.prenom,20,stdin);
  personne.prenom[strlen(personne.prenom)-1]='\0';

  fgets(personne.adresse,50,stdin);
  personne.adresse[strlen(personne.adresse)-1]='\0';

  fgets(personne.numero,10,stdin);
  personne.numero[strlen(personne.numero)-1]='\0';

  fgets(personne.localite,20,stdin);
  personne.localite[strlen(personne.localite)-1]='\0';
  
  scanf("%d",&(personne.CP));
    
  scanf("%d",&(personne.naissance.jour));
  scanf("%d",&(personne.naissance.mois));
  scanf("%d",&(personne.naissance.annee));
  //scanf("%d/%d/%d",&(personne.naissance.jour),&(personne.naissance.mois),&(personne.naissance.annee));
  
  affiche_contact(personne);

  printf("\n");
  return 0;
}
