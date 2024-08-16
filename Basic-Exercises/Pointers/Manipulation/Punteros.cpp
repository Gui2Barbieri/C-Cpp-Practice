#include <iostream>
using namespace std;

int var{10};

    int funcion(int *ptr){ //Creo puntero llamado var, el puntero almacena direccion de memoria y opera con eso. 
                            //este puntero ademas funciona como parametro.

        *ptr+=10; //Llamo puntero, y le digo que en la direccion de memoria agregue un 10 y la reescriba
                  //porque si yo pongo igual, solo reescribe reemplazando sin agregar.
        return *ptr;
    }

int main(){

    // funcion(&var); //Le paso como argumento a la funcion,"var", pero ojo, como tiene "&" lo estoy pasando por referencia
                   //es decir, estoy pasando la direccion de memoria a la funcion.

    cout << var << "\n" << funcion(&var) << "\n" << var;

}