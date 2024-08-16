#include <iostream>
using namespace std;

/*
Aca lo que hago es hacer algunas pruebas con el funcionamiento del puntero, para entender diferencias
al llamarlo y ver como reacciona.
*/

int main(){

    int var{10}; //Declaro e inicializo variable en 10.

    int *ptr=&var; //Declaro un puntero, almaceno la direccion de memoria de "var" en el puntero.

    *ptr=20; //En el puntero, uso asterisco para trabajar directo con el valor, si lo llamo sin asterisco, 
             //trabajo con la direccion de memoria en si, no con el valor.
    
    //A tener en consideracion, el puntero con asterisco SOLO trabaja con direccion de memoria para almacenarla
    //cuando estas inicializandolo, para el resto de los casos, como cuando llamas al puntero, el asterisco
    //trabaja con el valor que hay en ese espacio de memoria

    cout << &var << "\n" << ptr << "\n" << &ptr << "\n" << *ptr << "\n" << var;
//aca podes ver la diferencia de cada uno. Si podes predecir que te va a entregar cada uno, entonces lo 
//entendiste, no predecir la direccion en memoria, si no, que valores va a entregar (si son iguales o no)
//Si te preguntas porque ptr y &ptr no tienen la misma direccion de memoria, es porque ptr almacena la 
//direcion en memoria del valor de var, por otra parte, &ptr es la direccion en memoria del puntero en si.
}
