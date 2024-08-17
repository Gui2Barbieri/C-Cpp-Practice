#include <stdio.h>
int main(void){

/*Se esta tratando de que se tome 2 valores diferentes, pero escribis un valor y repite el que metiste sin preguntar
por el otro*/

    int car = 0;
    car = getchar(); //Como no hay nada para leer despues del ultimo valor del stdin (porque no hay valor, en primer lugar), 
    //entonces espera a que le tires un valor. Lo lee y almacena en car como entero.
    getchar();
    putchar(car); //Aca escribe en el buffer de stdout el valor contenido en putchar, en este caso lo que escribiste en getchar antes y almacenaste en car.
    //Esto repercute en un salto de linea, puesto que el caracter que se escribio fue "\n".
    //Por configuracion de la terminal, imprime repetido el valor de antes, pero en realidad esta imprimiendo un salto de linea.

    car = getchar(); //Lee el siguiente valor al ultimo leido en el stdin, en este caso tenemos un "\n" que quedo en el buffer. Por lo que el programa lo toma y sigue de largo.
    putchar(car);

}



//Tene en cuenta que lo que sucede en realidad es que se imprime la a + un quiebre de linea "\n", aca se clona el valor por un tema de consola.


//Explicar solucion y meter a Anki. Acordate que siempre despues del getchar() cuando apretas enter se añade el \n, eso despues lo lee putchar que es el ultimo valor y queda el salto de linea