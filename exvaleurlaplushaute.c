#include<stdio.h>

int main(void)
{
    int valeur1 = 0, valeur2 = 0, valeur3 = 0;
    
    printf("valeur1\n");
    scanf("%i", &valeur1);
    
    printf("valeur2\n");
    scanf("%i", &valeur2);
    
    printf("valeur3\n");
    scanf("%i", &valeur3);
    
    if(valeur1 < valeur2 && valeur2 < valeur3)
    {
        printf("la valeur la plus haute est %i",valeur3);
        return 0;
    }
    else if (valeur1 < valeur3 && valeur3 < valeur2)
    {
        printf("la valeur la plus haute est %i", valeur2);
        return 0;
    }
    else if (valeur3 < valeur2 && valeur2 < valeur1)
    {
        printf("la valeur la plus haute est %i",valeur1);
        return 0;
    }
    
}