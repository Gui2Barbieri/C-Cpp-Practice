#include <iostream>
using namespace std;

int main(){

    /*

    Hace un programa basico que te diga si se puede sacar la licencia de conducir, tenes que pasar el examen psicotecnico
    y tambien tener por lo menos 16 años.

    */

    int edad;

    string ex_medico;

    cout << "Vamos a ver si podes sacar la licencia de conducir, introduci tu edad:" << endl;

    cin >> edad;

    cout << "Ahora, ¿pasaste el examen psicotecnico?" << endl;

    cin >> ex_medico;

    if (edad >= 16 && ex_medico=="Si"){


        cout << "Podes sacar la licencia de conducir.";


    }   

    else{


        cout << "No podes sacar la licencia de conducir.";


    }

}
