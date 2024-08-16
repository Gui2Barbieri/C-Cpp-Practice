#include <iostream>
#include <vector>
using namespace std;

int main(){

    /*

    Escribi los programas que dice Juan, el del break para buscar el Valor "ana" y parar ahi en el vector, y el de
    continue para el vector de precios y descuento. (este primero hacelo con un for-each, el segundo se puede hacer
    con for-each, pero queda medio rancio).
    
    */

    /*

    vector <string> nombres_base {"Jorge","Persona1","Carlos","Persona2","Messi"};

    for(string n : nombres_base){

        if(n == "Persona1") cout << "\nEncontre a Persona1.";

        else cout << "\nNo encuentro a Persona1.";

    }

    cout << "\nPersona2.";

    */

    //En todo este codigo vemos cuando lo corres, sigue todo el tiempo hasta el final del vector, a pesar de que encuentre a Persona1.
    //Ahora, hacemos lo mismo, pero con un break.

    /*

    vector <string> nombres_base {"Jorge","Persona1","Carlos","Persona2","Messi"};

    for(string n : nombres_base){

        if(n == "Persona1"){

            cout << "\nEncontre a Persona1.";
        
            break;
        } 

        else {

            cout << "\nNo encuentro a Persona1.";

        }

    }

    cout << "\nPersona2.";

    */

    //Listo, aca encuentra a Persona1, y ya no sigue mas.

    vector <float> precios {80, 129, 249, 350, 70, 49};

    const float descuento {0.15};

    for (int i=0;i<precios.size(); ++i){
    
        if (precios[i]<=100){

            continue; //Con este continue, hace que se ignore el contenido de esta iteracion, por ende, no se aplica el descuento a ese elemento que es el codigo que sigue abajo.

        }

        precios[i]-=precios[i]*descuento;

    }
    
    for (int i=0;i<precios.size(); ++i){
        
        cout << "El precio del producto N°" << i+1 << " es " << precios[i] << endl;
        
    }
    

}

