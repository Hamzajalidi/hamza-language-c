
#include <stdio.h>
#include <math.h>

int main() {
float R4,R3,R2,R1,Rser,Rpar;
printf("donnez la valour de R1:");
scanf("%f",&R1);
printf("donnez la valour de R2:");
scanf("%f",&R2);
printf("donnez la valour de R3:");
scanf("%f",&R3);

Rser = R1 + R2 + R3;
printf("la resistances son branchees en series :%f\n",Rser);

Rpar= (R1*R2*R3)/(R1*R2+R1*R3);
printf("la resistance son branchees en parallele :%f",Rpar);
  return 0;
}