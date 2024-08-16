#include <iostream>
using namespace std;

int main(){

short MetrosCuadradosCalidadMedia, MetrosCuadradosCalidadAlta;

const short DiasValidezPresupuesto{30};

const float PrecioMetroCalidadAlta{55.3},PrecioMetroCalidadMedia{35.5},IvaAdicion{1.21},IvaDiscriminado{0.21};

cout << "Bienvenido, ¿cuantos metros cuadrados de tarima flotante queres instalar con calidad media?" << endl << "NOTA: Ingresar solo numeros." << endl;

cin >> MetrosCuadradosCalidadMedia;

cout << "\nUsted ingreso " << MetrosCuadradosCalidadMedia << " metros." << endl << "\n¿Cuantos metros con calidad alta desea instalar?" << endl;

cin >> MetrosCuadradosCalidadAlta;

cout << "\nUsted ingreso " << MetrosCuadradosCalidadMedia << " metros de calidad media, y " << MetrosCuadradosCalidadAlta << " metros de calidad alta." << endl << "\nEl costo de los metros de calidad media es: " << (MetrosCuadradosCalidadMedia*PrecioMetroCalidadMedia) << endl << "\nEl costo de los metros de calidad alta es: " << (MetrosCuadradosCalidadAlta*PrecioMetroCalidadAlta) << endl << "\nEl costo del IVA discriminado es: " << ((MetrosCuadradosCalidadMedia*PrecioMetroCalidadMedia) + (MetrosCuadradosCalidadAlta*PrecioMetroCalidadAlta))*IvaDiscriminado << endl << "\nEl costo total seria " << ((MetrosCuadradosCalidadMedia*PrecioMetroCalidadMedia) + (MetrosCuadradosCalidadAlta*PrecioMetroCalidadAlta))*IvaAdicion << endl << "\nTener en cuenta que el presupuesto tiene una validez de " << DiasValidezPresupuesto << " dias." << endl;


}