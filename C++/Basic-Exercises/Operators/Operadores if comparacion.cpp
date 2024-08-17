#include <iostream>
using namespace std;

int main(){

    /*
    Hacer un programa basico donde se vea si un alumno debe ser becado o no en base a si vive a mas de 20km del
    instituto, o si sus calificaicones son mayores a 8.

    */

    int distancia, ingresos_familiares;

    float calificacion;

    cout << "Indique su distancia al campus en kilometros: " << endl;

    cin >> distancia;

    cout << "Indique ingresos familiares: " << endl;

    cin >> ingresos_familiares;

    cout << "Indique su mayor calificacion: " << endl;

    cin >> calificacion;

    if (distancia >= 20 && ingresos_familiares <= 20000 || calificacion > 8){

        cout << "Usted puede recibir la beca.";

    }

    else{

        cout << "No puede recibir la beca.";

    }
}
