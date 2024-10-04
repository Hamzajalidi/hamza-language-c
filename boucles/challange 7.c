#include <stdio.h>

int main() {
    int n = 0 ;
    int r=0;
   printf ("entrer :");
    scanf("%d",&n);
while(n != 0) {
        r = r * 10 + n % 10; 
        n /= 10;
}
 printf("%d", r);

    return 0;
}