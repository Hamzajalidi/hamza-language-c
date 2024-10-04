
#include <stdio.h>

int main() {
    int somme =0,moyenne,n;
    printf ("entre :");
    scanf ("%d",&n);
    int  tab[n];
    printf("entrer les element du tableau:\n");
    
    for(int i=0; i<n;i++){
        printf("%d",i+1);
        scanf ("%d",&tab[i]);
    }
moyenne = somme/5;
printf("la moyenne est %d\n",moyenne);

    return 0;
}