 
#include <stdio.h>

int main() {
    int n;
    float s,i;
    printf (" la valeur de n :");
    scanf ("%d",&n);
s=1;
        
    if(n>0){
        for(i=1;i<=n;i++){
           s=s*i;
    }
        
    printf("la factorielle de %d est :%.f",s,n);
}
else if(n==0)
printf (" la factorielle est : 1");
else if (n<0)
printf (" veuille entrer un nombre positive ");









    return 0;
}