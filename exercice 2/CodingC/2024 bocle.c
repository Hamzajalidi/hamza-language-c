#include<stdio.h>

int main()
{
int ui,u,n,i;
printf("entre n :");
scanf("%d",&n);
 ui=6;
 for(i=1;i<=n;i++){
 u=(4*ui)+10;
 ui=u;}
 printf(" la valeur de n est %d",u);
   return 0;
}