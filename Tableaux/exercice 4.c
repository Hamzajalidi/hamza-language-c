 //Demande à l’utilisateur de saisir 10 nombres réels et les stocke dans un tableau.
// Calcule la somme, le produit et la moyenne des éléments du tableau.
//Affiche ces résultats.
#include <stdio.h>

int main() {
    int i;
    float T[10];
    float s,m,p;
    printf ("veuillez saisair les element du tableau \n");
    
 for (i=0;i<10;i++){
 printf("T[%d]=",i);
 scanf("%f",&T[i]);
 }
 s = 0;
 p = 1;
 for(i=0;i<10;i++){
 s = s+T[i];
 p=p*T[i];
}
m = s/10;
printf  ("la somme = %f\n",s);
printf  ("produit = %f\n",p);
printf  ("moyenne= %f\n",m);
    return 0;
}