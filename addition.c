#include<stdio.h>

int main(void)
{
    int nombre = 0,nombre1 = 0,resultat = 0;
    
    printf("valeur 1\n");// je demande la premiere valeur
    scanf("%i", &nombre);// je recupere la valeur
    
    printf("valeur 2\n");
    scanf("%i", &nombre1);
    
    resultat = nombre + nombre1;// je fait le calcul des deux valeurs 
    printf("%i",resultat);//j'affiche le resulta
    
}