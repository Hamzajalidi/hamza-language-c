
#include <stdio.h>

int main() {
    int somme =0,moyenne;
    int  tab[5]={10,7,8,9,7};
    for(int i=0; i<5;i++){
        somme+=tab[i];
    }
moyenne = somme/5;
printf("la moyenne est %d\n",moyenne);

    return 0;
}