#include <stdio.h> //a supprimer à la fin si ya le temps
#include <string.h>
/* Saisie d'une phrase par l'utilisateur */
  void saisie(char chaine[]){
    printf(" Saisissez une phrase à vérifier (80 caractères max.) : ");
    fgets(chaine, 81, stdin); // 80 caractères + "\0"
    chaine[strlen(chaine)-1]='\0'; //enlève le '\n'
  }
