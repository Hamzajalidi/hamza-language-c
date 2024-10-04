#include<stdio.h>

int main()
{
int n,i,s;
printf("entre la date denaissance");
scanf("%d",&n);
s=0;
for(i=1;i<=n;i++)
{
s=s+((3*i)+500);}
printf ("la somme est %d ",s);






   return 0;
}