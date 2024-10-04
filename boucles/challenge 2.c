#include <stdio.h>

int main() {
 int n,i,s;
 printf("entrer un nombre :");
 scanf("%d",&n);
 s=1;
 for (i=1;i<=n;i++){
 s=i*s;
     
 }
 printf ("la multiplication  est :%d\t= %d ",i,s);
 
 
    return 0;
}
