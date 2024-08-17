#include <stdio.h>

int main(){

    int a=0,b=1,c=0;

    printf("%d\n",c); //0
    
    for (int i=0;i<9;++i){

        c=a+b;

        printf("%d\n",c);
            
        a=c; //Hago que a retenga el valor final de c, y se reusa en la proxima iteracion.
        
        b=a-b; //b ahora es el valor anterior de c, que era a originalmente.
        
    }    

}