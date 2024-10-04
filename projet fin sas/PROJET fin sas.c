 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
            char n[100][20];// un tableau de le nom
            char p[100][20];//un tableau de le prenom
            char t[100][20];//un tableau de la telephone
            int age[100];//un tableau de l age
            char status ;//un tableau de statu
            char date [100][20];//un tableau de date
            char refernce[100];
            int choix = 0;  
            char ps = 0;//le switch de status
            int found = 0; 
            int x  = 0;
            int i;
 
    while(choix != 7)
    {
        printf("===============================\n");
        printf("1. Ajouter une reservation :\n");
        printf("2. Modifier ou supprimer une reservation :\n");
        printf("3. Afficher les details d'une reservation :\n");
        printf("4. Tri des reservations :\n");
        printf("5. Recherche des reservations :\n");
        printf("6. Statistiques :\n");
        printf("7. quitter le programm.\n");
        printf("===============================\n");
        printf("entrez un choix :");
        scanf("%d", &choix);

        switch (choix)
    {
        case 1:{
          
            printf("entrez le nom  %d : ", x + 1);
            scanf("%s", n[x]);
            printf("entrez le prenom :");
            scanf("%s", p[x]);
            printf("entrez le telephone :");
            scanf("%s", &t[x]);    
            printf("entrez age : ");
            scanf("%d", &age[x]);
            printf("entrez la date de reservation:");
            scanf("%s",&date[x]);
            
            printf("===============================\n");
            printf("entrez le numero 1 que validi\n");
            printf("entrez le numero 2 que reporte\n");
            printf("entrez le numero 3 que annule\n");
            printf("entrez le numero 4 que trait\n");
            printf("===============================\n");
            
            printf("entrez un choix : \n");
           
            scanf("%s",&status);
            
                     switch(status)
                { 
                     case 1 :
                     printf("valid: \n");
                     break;
                     case 2 :
                     printf("reporte \n");
                     break;
                     case 3 :
                     printf("annule \n");
                     break;
                     case 4 :
                     printf("trait \n");
                     break;
                }            
                    printf("***************************\n");
                    printf("refernce unique : %d \n",x+1);
                    printf("***************************\n");
                    printf("le reservations est enregistrer !\n\n\n\n");

                    x++;
                    break;            
            }
        case 2:

          
             
        case 3:
        {
            for(int i = 0; i < x; i++)
            {
                printf("****************\n");
                printf(" le nom : %s\n", n[i]);
                printf(" le prenom :%s\n", p[i]);
                printf(" le telephone :%.2s\n", t[i]);
                printf(" le age :%d\n", age[i]);
                printf("la date : %s\n",date[i]);
            }
                printf(" le status :%s\n",ps);
                printf(" refernce unique :%s\n",refernce[x+1]);
                 printf("****************\n");
            
              break;
        }
        case 4:
        case 5:
       
          
        case 6:
        case 7:{
            printf("vous avez quittez :\n");
            return 0;
        }
        default :{
            printf("====================================");
            printf("\nnumber incorrect. entrez un autre number\n");
            printf("====================================\n");
        
         
        }
 break;
        }
    }
    
 
    return 0;
}