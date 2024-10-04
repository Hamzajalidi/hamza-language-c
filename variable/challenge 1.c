#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float m_s,km_h;
    printf("entre la vitesse en kilometre par heure :\n ");
    scanf("%f",&km_h);
    m_s = km_h* 0.27778;
    printf("la distance en metres par seconde: %f",m_s);


return 0;
}

