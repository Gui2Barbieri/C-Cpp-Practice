#include <iostream>
using namespace std;

int main(){

    short mi_matriz [4][5] {15,25,34,23,54,
                            21,34,26,76,53,
                            54,45,245,55,59,
                            542,1245,1243,5663,2467};


cout << "este es el numero del array: " << endl << mi_matriz [3][2] << endl;

    mi_matriz [3][2] = 1215;

cout << "\neste es el numero del array: " << endl << mi_matriz [3][2] << endl;

}
