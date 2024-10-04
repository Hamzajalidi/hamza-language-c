
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    char c;
    printf("ecriver un caractere  :");
    scanf("%c",&c);
     switch(c){
    
    case 'u' :printf("Voyelle");
    break;
    case 'o':printf("Voyelle");
    break;
    case 'i':printf("Voyelle");
    break;
    case 'e' :printf("Voyelle");
    break;
    case 'a':printf("Voyelle");
    break;
    default: printf(" no  Voyelle ");
    break;
    }

    return 0;
}