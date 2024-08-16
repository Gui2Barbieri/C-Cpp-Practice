#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector <int> Vect0r{2,4,7};

    Vect0r.push_back(91);

    for (int i=0;i<Vect0r.size(); i++){
        
        cout << Vect0r[i] << endl;

    }
    

}