// Online C compiler to run C program online
#include <stdio.h>
#include <math.h>
int main() {
    int n,i,s;
    printf (" entrer un nombre entier n:");
    scanf ("%d",&n);
    s=0;
     for (i=1;i<=n-1;i++){
     s=pow(i,n);
     printf("%d^%d =%d\n",i,n,s);
     }
    
    return 0;
}