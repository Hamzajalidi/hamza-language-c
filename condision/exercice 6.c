#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int N;
    printf("donner la valeur de N:");
    scanf("%d",&N);
    switch(N){
    case 1:printf("lundi");
    break;
    case 2:printf("mardi");
    break;
    case 3:printf("mecredi");
    break;
    case 4:printf("jeudi");
    break;
    case 5:printf("vendredi");
    break;
    case 6:printf("samedi");
    break;
    case 7:printf("dimench");
    break;
    default: printf("le nombre es incorect");
    break;
    }
    return 0;
}