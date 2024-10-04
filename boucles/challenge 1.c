 
#include <stdio.h>

int main() {
 int n,i,s;
 printf("entrer un nombre :");
 scanf("%d",&n);
 s=0;
 for(i=1;i<=10;i++){
 s=n*i;
 printf(" la multiple de %d x %d : %d\n",n,i,s);
    
}
 
    return 0;
}