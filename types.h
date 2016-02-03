/*
    Auteur : Rayan ROGAI + Jordan QUAGLIATINI
    Date : 03/02/2016
    Description du programme : Déclaration des types
*/

typedef enum type_mot {VERBE, ARTICLE, ADJECTIF, NOM, NOM_PROPRE, ABS, POINT} Type;

typedef enum etats_sortie {INCORRECTE=8,CORRECTE} Etats_sortie;

typedef struct mots
{
  char libelle_mot[10];
  Type libelle_type;
} Mots;
