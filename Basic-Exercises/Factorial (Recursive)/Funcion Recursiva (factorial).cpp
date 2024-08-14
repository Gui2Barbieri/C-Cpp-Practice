#include <iostream>
using namespace std;

//Hacer una funcion que calcule la recursividad de un numero.
//Factorial es multiplicar un numero por todos sus antecesores excepto 0. 5 seria... 5x4x3x2x1 = 120, eso es factorial de 5.

int Factorial(int NumeroCalc){

    int Numero{1};

    for (int i=NumeroCalc;i>0;--i) {
    
        Numero*=i;

    }

    return Numero;

}


int main(){

    int NumeroFactorial;

    cout << "Introduce el numero al cual le queres calcular el factorial" << "\n";

    cin >> NumeroFactorial;

    cout << "El factorial del numero " << NumeroFactorial << " es " << Factorial(NumeroFactorial);

}