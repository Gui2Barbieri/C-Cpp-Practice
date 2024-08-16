#include <iostream>
using namespace std;

void crearVentana(int ancho=800, int altura=600, string marco="Ventana", bool pantallaCompleta=false){

    cout << "Resolucion horizontal: " << ancho << "\n"

    << "Resolucion vertical: " << altura << "\n"
    
    << "Titulo: " << marco << "\n"
    
    << "Pantalla Completa: " << (pantallaCompleta==true? "Si":"No"); 

}


int main(){

    crearVentana(1920,1080,"hola",true);

}
