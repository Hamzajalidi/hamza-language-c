 
#include <stdio.h>
#include <math.h>

int main() {
int  temps,seconde,heurs,minute;
printf("donner le temps :");
scanf("%d",&temps);
 heurs = temps/60;
 minute = heurs/60;
 seconde = minute/60;
  printf("%dheures ",heurs);
  printf("%dminutes ",minute);
   printf("%dseconde ",seconde);

    return 0;
}