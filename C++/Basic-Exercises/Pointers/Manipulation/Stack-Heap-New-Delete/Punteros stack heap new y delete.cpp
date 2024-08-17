#include <iostream>
using namespace std;

int main(){
    //Mostra direcciones de memoria diferentes, entre el stack y heap. Varias pruebas.

    int *ptr{nullptr}; //Declaro e inicializo un puntero nulo, es decir, que no apunta a nada.

    cout << &ptr << "\n"; //Direccion de memoria en Stack del puntero.

    cout << ptr << "\n"; //Direccion de memoria que apunta el puntero en Heap.

    //Procedo a reservar un valor de memoria en el heap y asignarselo al puntero.

    ptr=new int; //Acordate que cuando se llama al puntero el asterisco no se usa mas, salvo que quieras trabajar con el valor de la direccion de memoria

    cout << ptr << "\n"; //Se muestra la direccion a la que apunta el puntero (en el Heap)

    cout << &ptr << "\n"; //Se muestra la direccion del puntero (Stack)

    cout << *ptr << "\n"; //Se muestra el valor almacenado en la direccion de memoria del Heap.

    *ptr=50; //Modifico u agrego valor almacenado en Heap mediante el puntero.

    cout << *ptr << "\n"; //Se muestra el valor almacenado en la direccion de memoria del Heap.

    delete ptr; //Elimino/Libero el contenido almacenado en la direccion de memoria que reservamos con el new para el puntero.

    cout << *ptr << "\n"; //Compruebo que el espacio de memoria del heap esta vacio, sin valor/valor random que hay en memoria.

    ptr=nullptr; //Hago que la direccion de memoria que apunta el puntero sea nula (para que no se use ese espacio de memoria para nada)

    cout << ptr << "\n"; //Compruebo que el puntero ya no usa mas esa direccion de memoria, y quedo libre.

}