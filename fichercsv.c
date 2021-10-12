#include<stdio.h>


int main(void)
{
    FILE *file=fopen("voiture.csv", "a");//1er le nom du ficher
    //2eme soit r soit w soit a...
    if(!file)
    {
        return 1;
    }
    char number[50];
    char name[50];
    printf("number: ");
    scanf("%s", number);
    
    printf("name: ");
    scanf("%s", name);
    
    
    //ecrire dans le fichier 
    fprintf(file,"%s,%s\n",name,number);
    //fermer le fichier csv
    fclose(file);
}