
#include <stdio.h>
int main() {
 int n;
 float i,s;
 printf (" entrer la valeur de n  :");
 scanf ("%d",&n);
 s=0;
 for(i=1;i<=n;i++)
 s=s+(1/i);
 printf (" la somme est :%.2f",s);

     return 0;
}