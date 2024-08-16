#include <iostream>
using namespace std;

/*

Aca la idea es crear un programa ficticio que indique cuantos autos pasaron por un detector de patentes. 
Se especifica la hora, dia y mes. Esto es para practicar con un array 3D. De hecho, si lo llegas a hacer bien, podes complejizarlo
agregando cosas como que se especifique sobre que dia se quiere saber exactamente (en vez de hacerlo como en el
video de pildoras informaticas) o incluso hacer un array 4D y agregar años a la ecuacion.

*/

int main(){

    // srand(time(0)); Aca preferiblemente no vamos a cambiar la seed, la dejamos como esta para que almacene valores randoms, pero se mantengan como si fuese un registro.

    cout << "Ingrese en orden respectivo el dia, mes y hora en el cual desea ver la cantidad de autos que pasaron. " << "\nEscribir los valores en numeros." << endl;

    short AutosCantidad [31][12][24];

    for (short Dia=0; Dia<31; Dia++){
        
        for (short Mes=0; Mes<31; Mes++){
            
            for (short Hora=0; Hora<12; Hora++){
            
                AutosCantidad [Dia][Mes][Hora] = rand()%1244;

            }

        }
        
    }
    
    short Dia;
    
    short Mes;

    short Hora;

    cin >> Dia >> Mes >> Hora;


    
    cout << "El 12 de abril a las 3AM pasaron " << AutosCantidad [11][3][3] << " autos." << endl;

    cout << "El valor ingresado da " << AutosCantidad [Dia-1] [Mes-1] [Hora] << "." << endl;
}