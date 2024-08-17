#include <stdio.h>

int main(void){

    int a=1,b=0,c=0; //Esto esta en este orden porque el algoritmo es mas eficiente de esta manera, pero se
                     //puede escribir con a=0 y b=1. Cuando lo programes te vas a dar cuenta.


    printf("%d\n%d\n",c,a); //Imprimo la base de la sucesion (0 y 1).

    for (int i=0;i<8;++i){ //Arranco bucle for para imprimir los caracteres.

        c=a+b; //Escribo aca cuanto tiene que valor c, basicamente la operacion que pasa cuando vas sumando
               //y obteneniendo valores en la sucesion.

        b=a; /*b vale lo mismo que a, porque si te fijas atentamente al patron de Fibonacci, siempre se termina
             reusando el valor viejo (2 pasos atras) de c, a lo contiene, por eso se lo asignamos a b. */

        a=c; /*El valor de a se iguala al de c, puesto que tenemos que re-utilizar el resultado*/

        printf("%d\n",c);

    }
    

}

/*#include <stdio.h>

int main(){

    int a=0,b=1,c=0;

    printf("0\n");

    for (int i=0;i<8;++i){
        
        c=a+b;

        b=a;

        a=c;

        printf("%d\n",c);

    }
    
Esto codigo es mejor


}*/