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

    cout << "Ingrese en orden respectivo el dia, mes, año (desde el 2000 hasta el 2007 en formato de 2 numeros) y hora en el cual desea ver la cantidad de autos que pasaron. " << "\nEscribir los valores en numeros." << endl;

    unsigned short AutosCantidad [31][12][7][24];

    for (short Dia=0; Dia<31; Dia++){
        
        for (short Mes=0; Mes<12; Mes++){
            
            for (short Año=0; Año<7; Año++){
                
                for (short Hora=0; Hora<24; Hora++){
                    
                    AutosCantidad [Dia][Mes][Año][Hora] = rand()%1244;

                }
                

            }

        }
        
    }
    
    unsigned short Dia;
    
    unsigned short Mes;

    unsigned short Año;

    unsigned short Hora;

    cin >> Dia >> Mes >> Año >> Hora;
    
    cout << "El 12 de abril del 2000 a las 3AM pasaron " << AutosCantidad [11][3][0][3] << " autos." << endl; //Valor de referencia para confirmar que el array funciona bien.

    cout << "El valor ingresado da " << AutosCantidad [Dia-1][Mes-1][Año][Hora] << "." << endl;

}
