#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    float t;
    printf("donner la valeur de temperateur:");
    scanf("%f",&t);
    
if (t<0) 
printf("glace ");

else if (t>100) 
printf("vapeur");
    
else  
printf("liquide");
    

    return 0;
}