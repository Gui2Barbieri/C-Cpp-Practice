#include <iostream>
using namespace std;

int main(){

    /*

    Crear un programa usando while donde el programa nos permita introducir numeros por consola. Cuando pongas "0"
    deja de introducir numeros. Llegado a ese caso, todos esos numeros introducidos se tienen que sumar.
    
    */

    /*

    int numero;

    vector <int> numeros;

    cout << "Introduzca una coleccion de numeros a sumar, cuando finalize, se va a dar el resultado final. Presione 0 cuando termine." << endl;

    while (cin >> numero && numero!=0){

        numeros.push_back(numero);

        cout << "Usted ingreso: " << numero << endl;

    }

    int suma_num;

    for (int i=0;i<=numeros.size();++i){
        
        suma_num = numeros[i]+numeros[i+1];

    }

    cout << suma_num;

    Este código no es eficiente, no lo uses.

    */

    int numero, suma_num=0;

    cout << "Introduzca una coleccion de numeros a sumar, cuando finalize, se va a dar el resultado final. Presione 0 cuando termine." << endl;

    while (cin >> numero && numero!=0){

        cout << "Usted ingreso: " << numero << endl;

        suma_num+=numero;

    }

    cout << "\nLa suma total de los numeros ingresados es: " << suma_num;

    //guarda cada numero en una variable que se va sobreescribiendo sumando cada numero del vector.
    //cout << "La suma total de los numeros da: " << 

}

