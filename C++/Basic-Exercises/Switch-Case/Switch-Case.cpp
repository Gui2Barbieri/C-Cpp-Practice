#include <iostream>
using namespace std;

int main(){

    /*
    Switch-case es interesante, porque es como un "super-if" donde es mas eficiente para poner valores numericos.
    Podes hacer un menu con Switch-case, proba a hacerlo, y fijate si es viable combinarlo con algunos de los
    programas que ya hiciste, por ejemplo, el de numero primo (de paso reescribilo).
    */

    int opcion;

    cout << "Elegi una de las siguientes opciones: " << "\n1.Imprimir mensaje." << "\n2.Hacer suma." << "\n3.Salir del programa." << endl;

    cin >> opcion;

    switch (opcion){

        case 1:

            cout << "Hola, amigo.";

            break;

        case 2:

            int a,b;

            cout << "Introduci 2 numeros a sumar." << endl;

            cin >> a >> b;

            cout << "La suma es:" << a+b;

            break;

        case 3:

            cout << "Saliendo del programa";

            break;

        default:
        
            cout << "Por favor, ingresa un valor de la lista.";
    
            break;

    }
}

