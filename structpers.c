//  structpers.c
//  Typevariable
//  Created by Sofiane on 08/02/2022.
//  Copyright © 2022 com.datainvent. All rights reserved.
#include <stdio.h>
typedef struct Personne Perso;
struct Personne
    {   char nom[100];
        char prenom[100];
        char adresse[100];
        int age;
        int genre;
    };

int main() {
    int i=0;
    int nbrdepersonne;
    char *idn[]={"nom","prenom","adresse","age","genre"};
    printf("saisir le nombre de personne : ");
    scanf("%d", &nbrdepersonne); // nbrdepersonne=6;
    Perso Pers[0];

    do{
        printf("\n");
        printf("Personne: %d\n",i); 
        for(int j=0;j<5;j++){
            printf("\tQuel est votre %s : ", idn[j]);
            switch (j)
            {
            case 0:scanf("%s", Pers[i].nom); 
                break;
            case 1:scanf("%s", Pers[i].prenom); 
                break;
            case 2:scanf("%s", Pers[i].adresse); 
                break;
            case 3:scanf("%d", &Pers[i].age); 
                break;
            case 4:scanf("%d", &Pers[i].genre); 
                break; 
            default:
                break;
            }
        } 
     i++;
    }
    while(i<nbrdepersonne);
    printf("\nVoici la liste des personnes:\n");
    for(i=0;i<nbrdepersonne;i++)
    {
    printf("Personne: %d Nom:%s Prenom:%s Adresse:%s ",i,Pers[i].nom,Pers[i].prenom,Pers[i].adresse);
    printf("Age:%d Genre:%d\n\n",Pers[i].age,Pers[i].genre);
    }
    return 0;
}
