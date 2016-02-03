/*
    Auteur : Rayan ROGAI + Jordan QUAGLIATINI
    Date : 03/02/2016
    Description du programme : Vérifie si la syntaxe d'une phrase est correcte
*/

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void)
{
    /* Déclarations */
    enum type_mot{ARTICLE, ADJECTIF, NOM, VERBE, NOM_PROPRE, POINT, ABS};
    typedef enum type_mot Type;

    enum etats_sortie{INCORRECTE=8,CORRECTE};
    typedef enum etats_sortie Etats_sortie;

    typedef struct mots Mots;
    struct mots
    {
      char libelle_mot[10];
      Type libelle_type;
    };

    Mots dictionnaire[10] = { {"le",0},{"chat",2},{"souris",2},
                              {"mange",3},{"la",0},{"petite",1},
                              {".",5},{"bleu",1},{"dort",3},{"julie",4}};

    char chaine[81]; // 80 caractères + "\0"

 /* Traitement */

    saisie(chaine); 



return 0;
}
