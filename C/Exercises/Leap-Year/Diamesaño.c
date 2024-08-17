#include <stdio.h>

int main(){

    int mes, año, dias;

    printf("Introducir mes (##) y año (####): ");

    scanf("%d%d", &mes, &año);

    switch (mes){
    
    case 1:
        printf("El mes %d del año %d tiene 31 días.", mes, año);
        break;

    case 2:
        if ((año % 4 == 0 && año % 100 != 0) || año % 400 == 0){
            printf("El mes %d del año %d tiene 29 días.", mes, año);
        } else {
            printf("El mes %d del año %d tiene 28 días.", mes, año);
        }
        break;

    case 3:
        printf("El mes %d del año %d tiene 31 días.", mes, año);
        break;
    
    case 4:
        printf("El mes %d del año %d tiene 30 días.", mes, año);
        break;

    case 5:
        printf("El mes %d del año %d tiene 31 días.", mes, año);
        break;
    
    case 6:
        printf("El mes %d del año %d tiene 30 días.", mes, año);
        break;
    
    case 7:
        printf("El mes %d del año %d tiene 31 días.", mes, año);
        break;
    
    case 8:
        printf("El mes %d del año %d tiene 31 días.", mes, año);
        break;
    
    case 9:
        printf("El mes %d del año %d tiene 30 días.", mes, año);
        break;
    
    case 10:
        printf("El mes %d del año %d tiene 31 días.", mes, año);
        break;
    
    case 11:
        printf("El mes %d del año %d tiene 30 días.", mes, año);
        break;
    
    case 12:
        printf("El mes %d del año %d tiene 31 días.", mes, año);
        break;
    
    default:
        printf("Mes inválido.");
        break;
    }
}

