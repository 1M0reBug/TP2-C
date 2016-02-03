/*
    Auteur : Rayan ROGAI + Jordan QUAGLIATINI
    Date : 03/02/2016
    Description du programme : Vérifie si la syntaxe d'une phrase est correcte
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"

int main(void)
{
    /* Déclarations */
    int etat = 0;

    int table[8][7] = { {8,1,8,8,4,8,8},
                        {8,8,1,2,8,8,8},
                        {3,8,2,8,8,8,8},
                        {8,5,8,8,7,8,9},
                        {3,8,8,8,8,8,8},
                        {8,8,5,6,8,8,8},
                        {8,8,6,8,8,8,9},
                        {8,8,8,8,8,8,9}
                      };

    Mots dictionnaire[10] = { {"le",ARTICLE},{"chat",NOM},{"souris",NOM},
                              {"mange",VERBE},{"la",ARTICLE},{"petite",ADJECTIF},
                              {".",POINT},{"bleu",ADJECTIF},{"dort",VERBE},{"julie",NOM_PROPRE}};

    char chaine[81]; // 80 caractères + "\0"

    /* Traitement */

    saisie(chaine);

    char * token = strtok(chaine," ");
    while(token){
      Type retour = getType(dictionnaire, 10, token);

      etat = table[etat][retour];

      if(etat == 8){
        puts("Phrase incorrecte");
        break;
      }else if(etat == 9){
        puts("Phrase correcte");
        break;
      }

      token = strtok(NULL, " ");
    }

return 0;
}
