<<<<<<< HEAD
#include<stdio.h>
#include<cs50.h>
#include<string.h>


int main(void)
{
    int answer = get_int("quel age a tu ?\n");//je met en place un get_string pour choisir la catégorie lier a l'age
    string enfant[3];//je deffini 3 tableau pour mes 3 catergorie
    string ados[3];
    string adulte[3];

    enfant[0] = "La Renne des Neiges";// catégorie enfant
    enfant[1] = "Les 5 Legandes";
    enfant[2] = "Cars 3";


    ados[0] = "Batman";//catergorie ados
    ados[1] = "Avengers";
    ados[2] = "Sucide squad";


    adulte[0] = "Killbill";//catégorie adulte
    adulte[1] = "Matrix";
    adulte[2] = "Conjuring";
    if (answer <= 11)//si answer( l'age de la personne) est inferieur a 11 ans 
    {
        for (int i = 0; i < 3; i++)//je creer une boucle pour lui proprosé les film suivant si il ne veut pas voir le film que je lui est proposé
        {
            printf("Je peut te proposé %s", enfant[i]);//je propose un film dans la catégorie enfant(je vien recuperé les information de ma catégorie)
            char bonfilm = get_char("\nveut tu le regarder ?\n");//je suis demande si il veut le regardé
            if (bonfilm == 'y')// si il ecrit y il veut le voir
            {
                printf("Bon film a toi!\n");//si il a dit oui je lui affiche ce message
                return 0;
                
            }
            else if (bonfilm == 'n')//si non il veut pas le voir se qui fait que vais refaire un toure dans la boucle se qui fait que ca va lui proposer d'autre film
            {
                
            }
            
        }
        
    }
    if (answer >= 11 && answer <= 17)//si il a entre 11 et 17 ans 
    {
        for (int j = 0; j < 3; j++)//je creer une boucle pour lui proprosé les film suivant si il ne veut pas voir le film que je lui est proposé
        {
            printf("Je peut te proposé %s", ados[j]); 
            char bonfilm = get_char("\nveut tu le regarder ?\n");//je propose un film dans la catégorie ados(je vien recuperé les information de ma catégorie)
            if (bonfilm == 'y')// si il ecrit y il veut le voir 
            {
                printf("Bon film a toi!\n");//si il a dit oui je lui affiche ce message
                return 0;
                
            }
            else if (bonfilm == 'n')//si il ecrit n il ne veut pas le voir et ducoup je lui propose d'autre film
            {
                
            }
            
        }
        
    }
    if (answer >= 18)//si il a 18 ans ou plus  
    {
        for (int k = 0; k < 3; k++)//je creer une boucle pour lui proprosé les film suivant si il ne veut pas voir le film que je lui est proposé
        {
            printf("Je peut te proposé %s", adulte[k]); 
            char bonfilm = get_char("\nveut tu le regarder ?\n");//je propose un film dans la catégorie adultz(je vien recuperé les information de ma catégorie)
            if (bonfilm == 'y')// si il ecrit y il veut le voir
            {
                printf("Bon film a toi!\n");//si il a dit oui je lui affiche ce message
                return 0;
                
            }
            else if (bonfilm == 'n')//si il ecrit n il ne veut pas le voir et ducoup je lui propose d'autre film
            {
                
            }
            
        }
        
    }
    
=======
#include<stdio.h>
#include<cs50.h>
#include<string.h>


int main(void)
{
    int answer = get_int("quel age a tu ?\n");//je met en place un get_string pour choisir la catégorie lier a l'age
    string enfant[3];//je deffini 3 tableau pour mes 3 catergorie
    string ados[3];
    string adulte[3];

    enfant[0] = "La Renne des Neiges";// catégorie enfant
    enfant[1] = "Les 5 Legandes";
    enfant[2] = "Cars 3";


    ados[0] = "Batman";//catergorie ados
    ados[1] = "Avengers";
    ados[2] = "Sucide squad";


    adulte[0] = "Killbill";//catégorie adulte
    adulte[1] = "Matrix";
    adulte[2] = "Conjuring";
    if (answer <= 11)//si answer( l'age de la personne) est inferieur a 11 ans 
    {
        for (int i = 0; i < 3; i++)//je creer une boucle pour lui proprosé les film suivant si il ne veut pas voir le film que je lui est proposé
        {
            printf("Je peut te proposé %s", enfant[i]);//je propose un film dans la catégorie enfant(je vien recuperé les information de ma catégorie)
            char bonfilm = get_char("\nveut tu le regarder ?\n");//je suis demande si il veut le regardé
            if (bonfilm == 'y')// si il ecrit y il veut le voir
            {
                printf("Bon film a toi!\n");//si il a dit oui je lui affiche ce message
                return 0;
                
            }
            else if (bonfilm == 'n')//si non il veut pas le voir se qui fait que vais refaire un toure dans la boucle se qui fait que ca va lui proposer d'autre film
            {
                
            }
            
        }
        
    }
    if (answer >= 11 && answer <= 17)//si il a entre 11 et 17 ans 
    {
        for (int j = 0; j < 3; j++)//je creer une boucle pour lui proprosé les film suivant si il ne veut pas voir le film que je lui est proposé
        {
            printf("Je peut te proposé %s", ados[j]); 
            char bonfilm = get_char("\nveut tu le regarder ?\n");//je propose un film dans la catégorie ados(je vien recuperé les information de ma catégorie)
            if (bonfilm == 'y')// si il ecrit y il veut le voir 
            {
                printf("Bon film a toi!\n");//si il a dit oui je lui affiche ce message
                return 0;
                
            }
            else if (bonfilm == 'n')//si il ecrit n il ne veut pas le voir et ducoup je lui propose d'autre film
            {
                
            }
            
        }
        
    }
    if (answer >= 18)//si il a 18 ans ou plus  
    {
        for (int k = 0; k < 3; k++)//je creer une boucle pour lui proprosé les film suivant si il ne veut pas voir le film que je lui est proposé
        {
            printf("Je peut te proposé %s", adulte[k]); 
            char bonfilm = get_char("\nveut tu le regarder ?\n");//je propose un film dans la catégorie adultz(je vien recuperé les information de ma catégorie)
            if (bonfilm == 'y')// si il ecrit y il veut le voir
            {
                printf("Bon film a toi!\n");//si il a dit oui je lui affiche ce message
                return 0;
                
            }
            else if (bonfilm == 'n')//si il ecrit n il ne veut pas le voir et ducoup je lui propose d'autre film
            {
                
            }
            
        }
        
    }
    
>>>>>>> 36ff42cab30410d76bec4b4e7aefad78a7275704
}