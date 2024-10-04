#include<stdio.h>

int main()
{
int nbr_ans;
float p_aga,p_kech;
p_kech =1000000;
p_aga = 50000;
nbr_ans = 0;
while (p_aga<p_kech){
p_aga =p_aga + (p_aga *0.08);
p_kech =p_kech +( p_kech +50000);
nbr_ans ++;
}
printf("p_aga est des passer a p_kech: %d",nbr_ans);
   return 0;
}