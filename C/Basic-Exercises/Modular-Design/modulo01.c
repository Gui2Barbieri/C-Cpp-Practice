#include <stdio.h>
#include "modulo02.h"


int main(void){

    int a=0, b=0,c=0;
    
    int mayor=0;

    printf("Valores de a, b y c: ");
    scanf("%d %d %d", &a, &b, &c);

    mayor = max(a,b);
    mayor = max(mayor,c);
    printf("Mayor = %d\n", mayor);

}