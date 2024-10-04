 
#include <stdio.h>
#include <math.h>

int main() {
float Xa,Ya,Xb,Yb,AB;
printf("donnez la valour de Xa:");
scanf("%f",&Xa);
printf("donnez la valour de Ya:");
scanf("%f",&Ya);
printf("donnez la valour de Xb:");
scanf("%f",&Xb);
printf("donnez la valour de Yb:");
scanf("%f",&Yb);
AB=sqrt(pow((Xa-Xb),2)+pow((Ya-Yb),2));
printf("la distance entre de point A et B =%f",AB);

  return 0;
}