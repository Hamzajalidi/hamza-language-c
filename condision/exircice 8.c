
#include <stdio.h>
#include <stdlib.h>
int main()
{
int N;    
float F;

printf("donner la valeur de N :");
scanf ("%d",&N);
if(N<=10)
      F = N * 0.30;
else if (N<=30)
      F = 10 * 0.3 + ( N - 10 ) * 0.25;
else 
      F = 10 * 0.3 + 20 * 0.25 + (N-30) * 0.2;
printf ("la valour de F:%f",F);
    return 0;
}