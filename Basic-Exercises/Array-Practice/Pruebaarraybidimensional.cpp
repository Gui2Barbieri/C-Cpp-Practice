#include <iostream>
using namespace std;

int main(){

cout << "Ingresa 20 valores:" << endl;

short mi_matriz [4][5]; //Declaro array, pero no especifico valores en las posiciones.

/*
Aca lo que se va a tratar de hacer es que el usuario ingrese valores en consola, se registren en el array 
rellenando todas las posiciones y por ultimo mostrarlo en consola.

Explicacion de que hace este for de abajo. 
Se anida (se mete un for adentro del otro) para rellenar las filas por un lado, y las columnas por el otro. 
Primero se entra al primer bucle for que es el de las filas, se crea el primer valor "0", y ahi entra al otro for creando otro valor 0, pero para las columnas. 
Una vez hecho eso crea otro valor para las columnas "1", despues otro "2" y asi hasta terminar el bucle for. 
Una vez terminado, ya hizo una fila-columna entera, fijate que solo hay un valor para la fila, y 5 para las columnas, eso es una fila completa sola, ahora se sale del segundo bucle for anidado y se vuelve a entrar el primer bucle for, generando ahora un "1". 
Antes los valores nos quedaron como [0][0], [0][1], [0][2], [0][3], [0][4]. Ahora va a quedar lo mismo, pero con un "1" atras.

*/

for(short fila=0; fila<4; fila++){ 
                                   //NOTA: Acordate que la fila arranca de 0, lo mismo para la columna, si vos pusieras que columna es menor que 6 en el for... entonces van a haber 6 columnas, porque la columna 0 se cuenta.
        for (short columna=0; columna<5; columna++){    
            
            cin >> mi_matriz [fila][columna]; //Inicializo array, poniendo valores en las posiciones, QUE NO SON FILA Y COLUMNA COMO VARIABLES, esas solo indican la posicion.
        
        }
        
}

/*

Comentario, tuviste una embolia cerebral linda con este for aca, te confundiste en el for con el tema de que se 
inicializa fila con 0, y columna con 0. Pensaste que en el cin escribias el valor para la variable fila y la 
variable columna, efectivamente reemplazando sus valores.
Bueno, no, no pasa asi, porque en el array funciona diferente, vos aca cuando en mi_matriz pones [fila][columna]
no estas tomando el valor de fila y columna como los valores que se meten en el array, nada que ver. 
Lo unica que toma es LA POSICION, es decir, en la primera iteracion que seria fila = 0 y columna = 0 vos con el cin
estas indicando que valor vas a meter con el cin en [0][0], porque son los valores que da el bucle for.
Estos bucles quedarian asi:
cin >> mi_matriz [0][0];
cin >> mi_matriz [0][1];
cin >> mi_matriz [0][2];
cin >> mi_matriz [0][3];
cin >> mi_matriz [0][4];

Sale del for y vuelve a entrar al primero, y despues al segundo anidado:
cin >> mi_matriz [1][0];
cin >> mi_matriz [1][1];
cin >> mi_matriz [1][2];

etc...

*/

cout << "\nProcedemos a mostrar los valores como una matriz de filas y columnas:" << endl << endl;

for(short fila=0; fila<4; fila++){ 

        for (short columna=0; columna<5; columna++)
        {
    
            cout << mi_matriz [fila][columna];

        }

    cout << endl;

}

}
