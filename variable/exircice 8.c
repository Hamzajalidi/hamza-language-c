
#include <stdio.h>
#include <math.h>

int main() {
int  A,B,C;
printf("donner la valeur de A:");
scanf("%d",&A);
printf("donner la valeur de B:");
scanf("%d",&B);
C=A;
A=B;
B=C;
printf("la nouvelle valeure da A:%d\n",A);
printf("la nouvelle valeure de B:%d\n",B);

    return 0;
}