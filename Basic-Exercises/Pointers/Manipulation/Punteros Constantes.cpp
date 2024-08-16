#include <iostream>
using namespace std;

int main(){

    //Punteros Constantes

    /*

    int prueba1 {123}; //Creo variable

    int prueba2 {43}; //Creo segunda variable

    int *const ptr0 {&prueba1}; //Creo puntero constante

    cout << *ptr0 << "\n"; //Imprimo valor sin problmas

    ptr0=prueba2; //Cambio la direccion de memoria del puntero constante

    cout << *ptr0 << "\n"; //El programa no compila, porque el puntero constante NO puede cambiar la direccion de memoria.

    //NOTA ADICIONAL, el puntero constante tiene que SI o SI inicializarse al momento de declarar, si lo haces despues no compila;

    */

   //Punteros constantes a constantes

   const int prueba2 {8}; //Declaro la constante

   const int prueba3 {4}; //Declaro otra constante de prueba;

   const int *const ptr1 {&prueba2}; //Declaro e inicializo el puntero constante.

   cout << *ptr1 << "\n"; //Muestro el valor al que apunta el puntero constante.

   *ptr=23; //Trato de cambiar el valor de la constante mediante el puntero, no funciona. 

   ptr1=&prueba3; //Trato de cambiar la direccion en memoria del puntero constante, no funciona, no compila.

    

}
