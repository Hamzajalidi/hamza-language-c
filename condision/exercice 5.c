
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int A,B;
    printf("donner la valeur de A:");
    scanf("%d",&A);
    printf("donner la valeur de B:");
    scanf("%d",&B);
    if ( A*B<0)
    printf("A et b ont deux signes differnts");
    else 
    printf("A et b ont la meme signe");
    
    
    return 0;
}