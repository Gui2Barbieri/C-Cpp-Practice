#include <iostream>
#include <vector>
using namespace std;

int main(){
/*
    En este ejercicio tenes que hacer que el programa te pregunte desde consola cuantos elementos queres que tenga el 
    vector, y a continuacion rellenar esos elementos del vector con valores que vos quieras. Una vez hecho todo eso
    que haga una lectura de todos los elementos rellenados y los imprima.
*/

/*

    cout << "Bienvenido, ingrese por consola el numero de posiciones que quiere que el vector tenga." << endl;

    int PosicionesVector;

    cin >> PosicionesVector;

    vector <int> Records(PosicionesVector);

    cout << "Usted ingreso " << PosicionesVector << " posiciones." << "\nProceda a ingresar posicion a posicion el valor que desea que tengan." << endl;

        for (int i=0; i<PosicionesVector; i++){

            cin >> Records[i];
        
    }
    
    cout << "\nLos valores ingresados en el vector se van a presentar separados por un espacio uno al lado del otro, estos son: " << endl;

        for (int i=0;i<Records.size(); i++){
        
            cout << Records[i] << " ";

    }
    
    */

   /*

    int PosicionesArray; 

    cout << "Bienvenido, ingrese por consola el numero de posiciones que quiere que el array tenga." << endl;

    cin >> PosicionesArray;

    int Records[PosicionesArray];

    cout << "Usted ingreso " << PosicionesArray << " posiciones." << "\nProceda a ingresar los numeros que quiere rellenar en esas posiciones." << endl; 

        for (int i=0;i<PosicionesArray;i++){

        
            cout << "\nIntroduci el valor para la posicion N°" << i << "." << endl;
 

            cin >> Records[i];

   }

    

    cout << "\nSe procede a mostrar separados por un espacio, los valores ingresados al array en pantalla: " << endl;

        for (int i=0;i<PosicionesArray;i++){
    
            cout << "\nEl valor ingresado para la posicion N°" << i << " es " << Records[i] << "." << endl;

   }

    //Ahora, hacelo con las tecnicas que si son dinamicas del vector, como at() que hace un comprobacion de limites, y push_back() que hace crecer al vector de forma dinamica metiendo un valor nuevo.

    */   

    /*

    cout << "Bienvenido, ingrese la cantidad de posiciones que desea que el vector tenga: " << endl;

    int Posiciones;

    vector <int> Records;

    int Valores;

    cin >> Posiciones;

    cout << "Usted ingreso " << Posiciones << ", ahora elija un valor para el cual le gustaria rellenar cada posicion." << endl;

        for (int i=0; i<Posiciones; i++){
        
            cout << "\nIntroduzca un valor para la posicion N°" << i << "." << endl;

            cin >> Valores;

            Records.push_back(Valores);    

    }

    cout << "Ahora se va a proceder a imprimir las posiciones del vector con los valores ingresados:" << endl;

        for (int i=0; i<Posiciones; i++){
        
            cout << "El valor ingresado para la posicion N° " << i << " es " << Records[i] << "." << endl;

    }

    */

    /*
    Perfecto, en este codigo se usa el vector de forma dinamica, lo arrancas con 0 posiciones, y este va creciendo
    a medida que se le van metiendo valores. No es lo mas eficiente, pero demuestra que entendiste muy bien el concepto.
    Ahora, podes probar a usar la funcion clear de los vectores a ver que onda. Es decir, vas a inicializar el vector con 
    una cantidad de posiciones, y vas a usar push_back para agregar valores extras y que entren a la "cola" en la parte de atras.
    Con la funcion clear, vas a borrar los valores que no sirvan.
    */

    
    //Prueba de el metodo erase de los vectores (es ineficiente).
    
    cout << "Bienvenido, ingrese la cantidad de posiciones que desea que el vector tenga: " << endl;

    int Posiciones;

    vector <int> Records(2);

    int Valores;

    cin >> Posiciones;

    cout << "Usted ingreso " << Posiciones << ", ahora elija un valor para el cual le gustaria rellenar cada posicion." << endl;

        for (int i=0; i<Posiciones; i++){
        
            cout << "\nIntroduzca un valor para la posicion N°" << i << "." << endl;

            cin >> Valores;

            Records.push_back(Valores);    

    }

    cout << "Ahora se va a proceder a imprimir las posiciones del vector con los valores ingresados:" << endl;

    Records.erase(Records.begin(),Records.begin()+2);

        for (int i=0; i<Posiciones; i++){

            cout << "El valor ingresado para la posicion N° " << i << " es " << Records[i] << "." << endl;

    }

}
