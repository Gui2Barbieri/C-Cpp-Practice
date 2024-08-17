#include <iostream>
using namespace std;

int main(){

    /*

    Prueba de do-while, hacer un menu que tenga 3 opciones, las 2 primeras solo imprimen mensaje de seleccion
    y la ultima sale del programa.
    
    */

    int opcion;

    do{

        cout << "Introduce una opcion del menu." << "\n1.Opcion" << "\n2.Opcion" << "\n3.Salir";

        cin >> opcion;

        if (opcion!=3) cout << "Seleccionaste opcion " << opcion;

        
    }
    while (opcion!=3);
     

}
