#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int A,B,C,D;
    printf("donner la valeur de A:");
    scanf("%d",&A);
    printf("donner la valeur de B:");
    scanf("%d",&B);
    if ( A*B<0){
    C = A;
    A = B;
    B = C;
    }
    else{ 
    C = A + B;
    D = A * B;
    A = C;
    B = D;
    }
    printf("la nevelle valeur de A est :%.d\n",A);
    printf("la nevelle valeur de b est :%.d\n",B);
    

    return 0;
}