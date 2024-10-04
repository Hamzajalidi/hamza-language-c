
#include <stdio.h>

int main() {
float note1,note2,note3,note4,note5,moyenne,somme;
printf("donez la note1\n");
scanf("%f",&note1);
printf("donez la note2\n");
scanf("%f",&note2);
printf("donez la note3\n");
scanf("%f",&note3);
printf("donez la note4\n");
scanf("%f",&note4);
printf("donez la note5\n");
scanf("%f",&note5);
somme = note1+note2+note3+note4+note5;
printf("la soome de 5 note : %f\n",somme);
moyenne = somme/5;
printf("la moyenne de 5 note:%f\n",moyenne);




    return 0;
}