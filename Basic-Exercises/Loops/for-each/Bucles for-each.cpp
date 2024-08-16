#include <iostream>
#include <vector>
using namespace std;

int main(){

    /*

    int edades [4]{22,23,54,67};

    for(int e:edades){

        cout << e << endl;

    }

    */

    vector<int> numeros;

    int num;

    cout << "Escribi numeros, sali escribiendo 0." << endl;

    while(cin >> num && num!=0){ //Mientras el usuario ingrese numeros, y, sea distinto de 0...

        numeros.push_back(num);

    }

    for(int n:numeros){

        cout << "Usted ingreso: " << n << endl;

    }

}
