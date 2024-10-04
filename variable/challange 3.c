
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    float temperateur ;
printf("ecrivez  la temperature:");
scanf("%f",&temperateur);
if (temperateur<0){
printf("l eau est solide");
}
else if ( temperateur >=100)
{printf("eau est gaz");
}
else
printf("l eau esr liquide");
return 0;    
}
