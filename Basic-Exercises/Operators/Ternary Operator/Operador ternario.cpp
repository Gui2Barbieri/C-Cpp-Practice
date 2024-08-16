#include <iostream>
using namespace std;

int main(){

    /*

    int numero;

    cout << "Introduzca un numero para verificar paridad." << endl;

    cin >> numero;

    if (numero%2==0){
        
        cout << "Este numero es par.";

    }
    
    else {

        cout << "Este numero no es par.";

    }

    */

    int numero;

    cout << "Introduzca un numero para verificar paridad." << endl;

    cin >> numero;

    cout << (numero%2==0? "Este numero es par.":"Este numero no es par.");
   
    }
