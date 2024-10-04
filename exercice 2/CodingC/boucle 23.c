#include<stdio.h>

int main()
{
int ui,u,n,i;
printf("entre n :");
scanf("%d",&n);
 ui=1;
 for(i=1;i<=n;i++){
 u=ui+u;
 ui=u;}
 printf(" la valeur de n est %d",u);
   return 0;
}