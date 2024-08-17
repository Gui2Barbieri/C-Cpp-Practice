#include <iostream>
using namespace std;

void ejemploFuncion(int &num){

    num=50;

    cout << "Valor llamando a la funcion (variable de la funcion): " << num << "\n";

}

int main(){

    int minum = 10;

    cout << "Valor original: " << minum << "\n";

    ejemploFuncion(minum);

    cout << "Valor original despues de llamado a la funcion: " << minum << "\n";

}


