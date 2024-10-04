  
#include <stdio.h>

int main() {
    float s,m;
     float t[8];
     int i;
     for(i=0;i<8;i++){
     printf ("dooner la npte de l etudiant %d ",i+1);
     scanf("%f",&t[i]);
     
     }
     s = 0;
     for (i=0;i<8;i++){
      s=s+t[i];
     m = s/8;}
     printf (" la moyenne de note : %f ",m);
     
    return 0;
}