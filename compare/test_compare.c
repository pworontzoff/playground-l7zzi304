#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "compare.h"

int _compare_contact(struct contact c1,struct contact c2)
{                                                              
	int ret;
	int date1,date2;

	if ((ret=strcmp(c1.nom,c2.nom))==0) {
		if ((ret=strcmp(c1.prenom,c2.prenom))==0) {
			date1 = c1.naissance.annee*10000+c1.naissance.mois*100+c1.naissance.jour;
			date2 = c2.naissance.annee*10000+c2.naissance.mois*100+c2.naissance.jour;
			if (date1<date2) ret=1;
			else if (date1>date2) ret=-1;
			else ret=0;
		}
	}
	return ret;
}

int main(void) {
	int i;
    int ok=1;
	
	struct contact liste[5] = {
								{"Dupond","Jean","","","",0,{12,12,2012}},
								{"Dupond","Jean","","","",0,{12,12,2012}},
								{"Dupond","Jean","","","",0,{15,8,1975}},
								{"Dupond","Albert","","","",0,{12,12,2012}},
								{"Durand","Jean","","","",0,{12,12,2012}}
							};
	
    for (i=0;i<4;i++) {		
	    printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Compare (%s %s - %d/%d/%d) and (%s %s - %d/%d/%d).'\n",i,liste[i].nom,liste[i].prenom,liste[i].naissance.jour,liste[i].naissance.mois,liste[i].naissance.annee,liste[i+1].nom,liste[i+1].prenom,liste[i+1].naissance.jour,liste[i+1].naissance.mois,liste[i+1].naissance.annee);
		if (_compare_contact(liste[i],liste[i+1]) == compare_contact(liste[i],liste[i+1])) {
            ok = ok && 1;
			printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Succes function test.'\n",i);
        }
        else {
            ok = ok && 0;
            printf("TECHIO> message --channel \"RAPPORT TEST %d\" 'Error function fail test.'\n",i);
        }
    }
        
    if(ok)
        printf("TECHIO> success true\n");
    else  
		printf("TECHIO> success false\n");

	return 0;
}
