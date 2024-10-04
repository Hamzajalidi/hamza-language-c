   
#include <stdio.h>

int main() {
 int n,i,s;
 printf("entrer un nombre :");
 scanf("%d",&n);
  for (i=1;i<=n;i++)
  {
      s=(i*2);
      printf ("%d   ",s);
  }
 
    return 0;
}