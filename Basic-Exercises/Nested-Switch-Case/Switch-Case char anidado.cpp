#include <iostream>
using namespace std;

int main(){

    /*
    
    Proba a crear un programa que tenga un menu en ingles y español. Este menu tiene que sub contener libros, vestimenta
    y tecnologia, para ambos idiomas.
    
    */

    char letra;

    cout << "Hola, ingrese la letra I para Ingles, E para Español. " << endl;

    cin >> letra;

    switch (letra){

        case 'I':
        case 'i':

            cout << "Select the option you want: " << "\n-Books" << "\n-Technology" << "\n-Clothes" << "\nUse the inticial letter in uppercase of each option in the menu to select it.";

            cin >> letra;

            switch (letra){

                case 'B':
                case 'b':
                cout << "You have selected books, so go to la concha de tu hermana.";
            
                break;

                case 'T':

                cout << "You have selected technology.";

                break;

                case 'C':
                case 'c':
                cout << "You have selected clothes.";
            
                break;

                default:

                cout << "Ur retarded.";
                        
                break;

            }

            break;
    
        case 'E':
        case 'e':
            cout << "Selecciona la opcion que quieras:" << "\n-Libros" << "\n-Tecnologia" << "\n-Ropa" << "\nSelecciona la opcion en base a la primera letra en mayuscula.";

            cin >> letra;

            switch (letra){

                case 'L':
                case 'l':
                cout << "Seleccionaste libros.";

                break;

                case 'T':
                case 't':
                cout << "Seleccionaste Tecnologia.";

                break;

                case 'R':
                case 'r':
                cout << "Seleccionaste Ropa.";

                break;

                case '8':

                cout << "El qlo te abrocho";

                break;

                default:

                cout << "Pone las cosas bien joputa.";

            }

            break;

            default:

            cout << "No me rompas las pelotas, hace bien las cosas.";

    }

    }
