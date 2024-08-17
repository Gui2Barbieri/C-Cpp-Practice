#include <stdio.h>

int main(){

    enum vehiculos {
        ford,
        k0,
        k1,
        k2,
        kmike,
} autos;

    scanf("%d",&autos);

    printf("%d",autos);

    if (autos == kmike){
        printf("kmike");
    }
    

}
