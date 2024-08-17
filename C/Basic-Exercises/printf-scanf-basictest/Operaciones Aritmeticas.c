#include <stdio.h>
int main(void){

    double dato1, dato2, dato3, resultado;

    printf("Ingresa 3 numeros, pueden ser decimales.\n");
    
    printf("Dato 1: ");

    scanf("%lf",&dato1);

    printf("Dato 2: ");

    scanf("%lf",&dato2);

    printf("Dato 3: ");

    scanf("%lf",&dato3);

    // Suma
    
    resultado = dato1 + dato2 + dato3;
    
    printf("%lf + %lf + %lf = %lf\n", dato1, dato2, dato3, resultado);
    
    // Resta
    
    resultado = dato1 - dato2 - dato3;
    
    printf("%lf - %lf - %lf = %lf\n", dato1, dato2, dato3, resultado);
    
    // Producto
    
    resultado = dato1 * dato2 * dato3;
    
    printf("%lf * %lf * %lf = %lf\n", dato1, dato2, dato3, resultado);
    
    // Cociente
    
    resultado = dato1 / dato2 / dato3;

    printf("%lf / %lf / %lf = %lf\n", dato1, dato2, dato3, resultado);

    bool prueba = false;

}