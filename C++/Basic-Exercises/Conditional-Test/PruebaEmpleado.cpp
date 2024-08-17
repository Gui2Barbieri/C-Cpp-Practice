#include <iostream>
using namespace std;

int main(){
    string empleado0;
    
    cout << "Introduzca el nombre del empleado del que se quiera obtener informacion." << endl;
    
    cin >> empleado0;

    if (empleado0=="Pepito") {
    
    short edad0{23};
    
    float salario0{1243.2412};
    
    cout << "Nombre:" << empleado0 << endl << "Edad:" << edad0 << endl << "Salario:" << salario0 << endl; 

    }

    else {

        cout << "Ese empleado no existe." << endl;

    }
}