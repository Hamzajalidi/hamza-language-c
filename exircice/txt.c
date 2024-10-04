
#include <stdio.h>

int main() {
    float longeur,largeur,permetre,aire;
    printf(" entree la largeur :");
    scanf ("%f",&largeur);
        printf(" entree la longeur :");
    scanf ("%f",&longeur);
    aire = longeur * largeur ;
permetre = 2*(longeur+largeur);
printf ("la largeure un rectangle :%.f\n",aire);
printf (" un permetre :%.f",permetre);
    return 0;
}