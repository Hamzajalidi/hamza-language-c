#include<stdio.h>

int main()
{
float N,i;
printf("entrer un nombreentre10 et 20 :");
scanf("%f",&N);
if (N < 10)
printf("pleus petit!");
if(N>20)
printf("pleus grand !");
if (N<=20 && N>=10)
printf("bravo");
    return 0;
}