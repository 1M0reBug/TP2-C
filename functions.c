/*
    Auteur : Rayan ROGAI + Jordan QUAGLIATINI
    Date : 03/02/2016
    Description du programme : Fonctions utiles pour le main
*/

#include <stdio.h>
#include <string.h>
#include "functions.h"

/* Saisie d'une phrase par l'utilisateur */
  void saisie(char chaine[]){
    printf(" Saisissez une phrase à vérifier (80 caractères max.) : ");
    fgets(chaine, 81, stdin); // 80 caractères + "\0"
    chaine[strlen(chaine)-1]='\0'; //enlève le '\n'
    int i;
    for(i = 0; i<strlen(chaine); i++) {
      if(chaine[i] == '.') {
        chaine[i] = ' ';
        chaine[i+1] = '.';
        chaine[i+2] = '\0';
        break;
      }
    }
  }


  Type getType(Mots dictionnaire[], int size, char chaine[]){
    int i;
    for(i=0 ; i < size ; i++){
      if(!strcmp(dictionnaire[i].libelle_mot, chaine))
        return dictionnaire[i].libelle_type;
    }
    return ABS;
  }
