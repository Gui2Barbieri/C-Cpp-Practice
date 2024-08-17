#include <stdio.h>

int main(){
    
    int cantidad,descuento,ID,precio=100,porcentaje=0;

    float preciodes=0;

    printf("Ingrese el ID del producto: ");

    scanf("%d",&ID);

    printf("\nIngrese cantidad a comprar: ");

    scanf("%d",&cantidad);

    if (cantidad>100){
        preciodes=cantidad*(precio-(precio*0.40));
        porcentaje=40;
    }

    if (cantidad<=100 && cantidad>=25){
        preciodes=cantidad*(precio-(precio*0.20));
        porcentaje=20;
    }

    if (cantidad<=24 && cantidad>=10){
        preciodes=cantidad*(precio-(precio*0.10));
        porcentaje=10;
    }

    else{
        preciodes=cantidad*precio;
    }

    printf("\n%10s%10s%10s%12s%10s\n%10d%10d%10d%10d%%%10.2f","Articulo","Cantidad","P.U","Dto.","Total",ID,cantidad,precio,porcentaje,preciodes);
}
