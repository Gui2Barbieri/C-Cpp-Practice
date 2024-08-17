#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <char> Vect0r {'a','b','c','d'};

    vector <float> SalarioBase (350, 2125.50); //Se especifica un vector de 350 posiciones, todas con el valor de coma flotante 2125.50.

    /*

    Ahora, el for este de abajo es el correcto, porque se ajusta dinamicamente al tamaño del array y no es necesario que especifique el tamaño del vector manualmente.
 
    */

    for (int i=0; i<SalarioBase.size(); i++){ //Llamamos a la funcion "size" del vector, para que de esta manera nos devuelva de manera dinamica la cantidad de posiciones que este posee, sin que las tengamos que ajustar nosotros. 
    
    cout << SalarioBase[i] << endl;

}

/*

Ejemplo debajo hecho con un while.

int i=0;

while (i<SalarioBase.size()){
    
    cout << SalarioBase[i] << endl;

    i++;

}

*/


}
