
#include <stdio.h>
#include <math.h>

int main()
{
float x,y,somme,produit,difference,divison;
printf("entre la valeur de x :");
scanf("%f",&x);
printf("entre la valeur de y :");
scanf("%f",&y);
somme = x+y;
produit = x*y;
difference = x-y;
divison = x/y;
printf("la somme %.f\n",somme);
printf("la  produit %.f\n",produit);
printf("la difference %.f\n",difference);
printf("la divison %.f\n",divison);
    return 0;
}