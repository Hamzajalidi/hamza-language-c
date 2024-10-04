    #include <stdio.h>
#include <math.h>
int main() {
    float A,B,max;
    printf("donner la valeur de A:") ;
    scanf("%f",&A);
    printf("donner la valeur de B:") ;
    scanf("%f",&B);
    max=A;
    if(B > max){
    max = B;
    
    }
        printf("le max est:%f",max);
    
    return 0;
}