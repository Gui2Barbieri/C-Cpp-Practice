#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    srand(time(0));

    bool continuar{true};

    int contador {0};

    int numero;

    char respuesta_usuario;

    const int numero_random {rand()%101};

    cout << "Bienvenido, en este juego se va a generar un numero random entre 0 y 100, donde vas a tener que adivinar cual es." << "\nVas a tener 5 intentos, y por cada intento fallido se te va a decir si el numero que ingresaste es mas grande o mas pequeño que el numero random." << "\nIngresa un numero: ";

    do{

        ++contador;

        cin >> numero;

        if (contador==5 && numero!=numero_random){
            
            cout << "Perdiste. ¿Quieres jugar de nuevo? (S/N)";

            cin >> respuesta_usuario;

                if (respuesta_usuario=='S' || respuesta_usuario=='s'){

                    continuar=true;

                    contador=0;

                    cout << "Proceda a ingresar su numero: " << "\n";

                }

                else{

                    continuar=false;

                    cout << "Hasta la proximaaaaaaaaa...!";

                }

        }

        else if (numero<numero_random) cout << "El numero ingresado es mas chico que el random, intenta otra vez.";
        
        else if (numero>numero_random) cout << "El numero ingresado es mas grande que el random, intenta otra vez.";

        else{

            cout << "Ganaste. ¿Quieres jugar otra vez? (S/N)";

            cin >> respuesta_usuario;

                if (respuesta_usuario=='S' || respuesta_usuario=='s'){

                    continuar=true;

                    contador=0;
            
                    cout << "Proceda a ingresar su numero: " << "\n";

                }

                else{

                    continuar=false;

                    cout << "Hasta la proximaaaaaaaaa...!";

                }

        }

    }

    while (contador<=5 && continuar==true);

}

