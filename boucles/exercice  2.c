
#include <stdio.h>

int main() {
    int i,N;
    printf("veuillez entrer un nombre:");
    scanf("%d",&N);
    while(N<10 || N>20){
        if (N<10){
        printf("pleus petit!\n");
        }
        else
        printf("pleu grand!:\n");
        
            printf("N:\n");
          scanf("%d",&N); 
    }
    printf("bravo");
    

    return 0;
}