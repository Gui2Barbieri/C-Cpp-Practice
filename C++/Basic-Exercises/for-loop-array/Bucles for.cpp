#include <iostream>
using namespace std;

int main(){

    int edades[6][4]{23,32,45,23,
                    45,24,64,63,
                    76,26,65,25,
                    46,87,32,80,
                    18,44,67,55,
                    42,97,53,79};

    for (int x=0;x<6;++x){
        
        for (int y=0;y<4;++y){
            
            cout << " " << edades[x][y];

        }

        cout << endl;

    }
    
   
    }
