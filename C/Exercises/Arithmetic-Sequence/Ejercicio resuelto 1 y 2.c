/*
 Calcular e imprimir los 10 primeros elementos de la serie a(i) = a(i-1) + 2 para i
igual a 1, 2,..., 9. El resultado sería: 1, 3, 5, 7, 9, 11, 13, 15, 17 y 19, donde:
a(0) = 1
a(1) = a(0) + 2
a(2) = a(1) + 2
...
*/

#include <stdio.h>

int main(){
/*
    int a {1};

    printf("a(0)=%d.\n",a);

    for (int i=1; i<10;++i){

        a+=2; 

        printf("a(%d)=%d.\n",i,a);
    
    }
*/

    int serie [10] {1}; //a(0)

    printf("a(0) = 1\n");

    for (int i=1;i<10;++i){
        
        serie [i] = serie[i-1]+2;

        printf("a(%d) = %d\n",i,serie[i]);

    }
    


}