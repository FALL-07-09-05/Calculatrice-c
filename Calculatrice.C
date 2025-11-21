// Online C compiler to run C program online
#include <stdio.h>
 
int main() {
   // declaration des entier
   char operateur;
   int nombre1,nombre2,resultat;
 
  printf("Entrer une operation (+,-,*,/,%):");
  scanf("%c",&operateur);
  printf("Entrer le premiere nombre :");
  scanf("%d",&nombre1);
  printf("Entrer le deuxieme nombre :");
  scanf("%d",&nombre2);
  
   switch (operateur)
   {
       case '+':
       resultat = nombre1+nombre2;
      printf("le resultat=%d",resultat);
       break;
       case '-':
      resultat=nombre1-nombre2;
      printf("le resultat=%d",resultat);
       break;
       case '*':
      resultat=nombre1*nombre2;
      printf("le resultat=%d",resultat);
       break;
       case '/':
       if (nombre2!=0)
      resultat=nombre1/nombre2;
       else
       {
          printf("erreur:la division par zero");
       }
      printf("le resultat=%d",resultat);
       case '%':
      resultat=nombre1%nombre2;
      printf("le resultat=%d",resultat);
       break;
      
      
   }
  
 
   return 0;
