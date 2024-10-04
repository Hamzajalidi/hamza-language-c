
#include <stdio.h>
#include <stdlib.h>

int main()
{
int age;    


printf("donner l age :");
scanf ("%d",&age);
if (age>=6 && age<=7)
            printf(" categorie de cet enfant :poussin");
  else if ( age>=8 && age <=9)
            printf(" categorie de cet enfant :pupille");
   else if (age>=10 && age<=11)
            printf(" categorie de cet enfant :minime");
else
            printf(" categorie de cet enfant :cadet");
    return 0;
}