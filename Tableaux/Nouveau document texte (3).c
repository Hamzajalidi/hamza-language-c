
#include <stdio.h>

int main() {
    int i,S,N;
    S=0;
    for(i=1;i<=8;i++){
    printf("entre n%d:",i);
    scanf("%d",&N);
    if (N<0)
    break;
    S=i+N;
    }
    printf ("la soome est %d",S);
    return 0;
}