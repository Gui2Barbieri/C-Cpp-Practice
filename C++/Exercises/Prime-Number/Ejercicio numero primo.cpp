#include <iostream>
using namespace std;

int main(){
/*
Aca tenes que ingresar un numero, y ver si es primo o no.
¿Que es un numero primo? Aquel que es divisible por uno, y por si mismo. (2 divisores positivos)
¿Que es un numero compuesto? Aquel numero que tiene mas de 2 divisores positivos y no es primo.
*/

    int Numero;

    cout << "Introduci un numero para ver si es primo o no." << endl;

    cin >> Numero;

    if (Numero<=1){

        cout << "Ningun numero menor o igual a 1 es primo o compuesto.";

    }

    for (int i = 2; i <= Numero/2 ; ++i){ //Acordate que el valor de Numero aca no se asigna a la variable Numero, asi que el if de abajo trabaja con el valor de Numero sin dividirlo por 2. 
        
        if (Numero%i==0){
                        
            cout << "Este numero NO es primo.";
        
            break;

        }
        
        if (Numero/2 == i){ //Si Numero/2 es igual a i... osea, que si ya i paso por todos los ciclos del for, viendo todos los divisores y no encontro ningun divisor, entonces el numero es primo.

            cout << "Este numero ES primo.";

        }
    }

    if (Numero<=3){

        cout << "Este numero ES primo.";

    }

}

