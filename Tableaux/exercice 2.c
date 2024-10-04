
 
#include <stdio.h>
//un programme qui declare remplasse et affiche un tableau de 10 entiers en les mettant tous a zero
int main() {
    int i;
    int T[10];
    for(i=0;i<10;i++);{
    T[i]=0;
    printf ("T[%d]=%d",i,T[i]);
    }

    return 0;
}