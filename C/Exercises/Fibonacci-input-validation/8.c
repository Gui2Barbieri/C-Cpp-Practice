#include <stdio.h>

void leerEntero(int *elementos){

    printf("Número de elementos a calcular de la serie: ");

    while (scanf("%d",elementos)==0){ // Trabaja con el puntero, scanf trabaja con direcciones de memoria
        printf("El dato ingresado no es correcto. Vuelvalo a introducir: ");
        while(getchar()!='\n');
    }

    while(*elementos<0){
        printf("El valor ingresado no puede ser negativo. Introduzca otro valor: ");
        while (scanf("%d",elementos)==0){
            printf("El dato ingresado no es correcto. Vuelvalo a introducir: ");
            while(getchar()!='\n');
        }
    }

    while (*elementos>100){
        printf("El valor introducido no puede ser mayor que 100. Introduzca otro: ");
        while (scanf("%d",elementos)==0){
            printf("El dato ingresado no es correcto. Vuelvalo a introducir: ");
            while(getchar()!='\n');    
        }
        while(*elementos<0){
            printf("El valor ingresado no puede ser negativo. Introduzca otro valor: ");
            while (scanf("%d",elementos)==0){
                printf("El dato ingresado no es correcto. Vuelvalo a introducir: ");
                while(getchar()!='\n');
            }
        }
    }

}

void serieFibonacci(int *elementos,int *f){

    printf("0 1 ");    

    for (int i=2;i<*elementos;++i){
        
        f[i]=f[i-2]+f[i-1];

        //printf("%d ",f[i]);
    }
    

}

void escibirResultado(int *elementos,int *f){

    for (int i=2;i<*elementos;++i){

        printf("%d ",f[i]);

    }
    
}

int main(){
    
    int elementos=0;

    leerEntero(&elementos);
    
    printf("Usted ingreso %d elementos.\n",elementos);

    int f[100]={0,1};

    serieFibonacci(&elementos,f);

    escibirResultado(&elementos,f);

}

