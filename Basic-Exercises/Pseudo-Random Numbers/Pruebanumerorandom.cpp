#include <iostream>
using namespace std;

//Vamos a probar a hacer numeros randoms con la funcion rand y srand, usando una unica seed, y con seeds diferentes cada vez que corre.

/*
int main(){

    int NumeroRandom {rand()};

    cout << "Vamos a imprimir un numero random: " << NumeroRandom << endl << NumeroRandom0 << endl;

}

*/

/*

Esto da un numero random, pero es siempre el mismo, vamos a probar ahora generando seeds nuevas cada vez que arranca el programa.

*/

int main(){

    srand(time(0));

    cout << "Vamos a imprimir un numero random entre 93 y 486: " << rand()%394 + 93 << endl << "Vamos a imprimir otro mas entre 243 y 1243: " << rand()%1001 + 243  << endl;

}

//Aca se genera una seed nueva cada vez que arranca el programa, en Anki tenes la explicacion bien, pero basicamente se genera con srand(time(0)), este parametro que se le da a la funcion indica el numero de seed, y esta atada al tiempo del sistema.

//fijate el tema de controlar el rango de los numeros randoms, agregarlo a anki tambien