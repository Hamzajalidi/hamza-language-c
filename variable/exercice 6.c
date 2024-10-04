#include <stdio.h>
#include <math.h>

int main() {
    float pi,volume_sphere,r;
    printf("taper la rayon d'une sphere :");
    scanf("%f",&r);
    pi=3.14;
    volume_sphere=(4*pi*pow(r,3)/3);
    printf("la volume d une sphere :%f",volume_sphere);

    return 0;
}