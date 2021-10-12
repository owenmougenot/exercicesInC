#include<stdio.h>
#include<math.h>


int main(int argc, char *argv[])
{
  float resultat = 0, nombre1 = 0, nombre2 = 0;
  float carre = 0;
  
  printf("Entrez la longeur de BC en cm : ");//je demande a l'utilisateur de rentrz la valeur de la longuer bc de sont triangle 
  scanf("%f", &nombre1);// je recupere la donne via le scanf 
  
  printf("Entrez la longeur de AB en cm : ");//je lui demande la deuxieme valeur
  scanf("%f", &nombre2);// je recupere la donne grace a un scanf 
  
  resultat = (nombre1 * nombre1) + (nombre2 * nombre2);//je calcul la valeur de l'hypotenuse au carre 
  carre = sqrt(resultat);// je fais la racine carre de l'hypotenuse avec la commande sqrt
  
  printf("donc l'hypotenuse est de %f cm\n", carre);// j'affiche le resultat 
  return 0;
}