#include <stdio.h>

int main(void){

    float a=0,b=0,c=0;

    printf("Ingresa los coeficientes para el polinomio ax⁵-bx³+cx-7.\n");

    scanf("%f%f%f",&a,&b,&c);

    float x=0;

    printf("Introduci un valor de x.\n");

    scanf("%f",&x);

    float resultado=a*x*x*x*x*x-b*x*x*x+c*x-7;

    printf("Para x = %f, %fx⁵-%fx³+%fx-7 = %f",x,a,b,c,resultado);

}