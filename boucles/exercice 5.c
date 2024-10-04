
#include <stdio.h>
#include <math.h>
int main() {
 
 int i,n,s;
 printf (" entrer la valeur de n  :");
 scanf ("%d",&n);
 s=0;
 for(i=0;i<=n;i++)
 
 s=s+(pow(10,i));
 printf (" la somme est :%.2d\n",s);

     return 0;
}