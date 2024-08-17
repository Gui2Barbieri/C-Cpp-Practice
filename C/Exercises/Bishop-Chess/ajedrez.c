#include <stdio.h>
#include <math.h>

int main(void){

    int Xalfil,Yalfil;

    printf("Introduci la posicion del Alfil en X: ");

    scanf("%d",&Xalfil);

    printf("Introduci la posicion del Alfil en Y: ");

    scanf("%d",&Yalfil);
    
    char tablero[8][8]={{'B','N','B','N','B','N','B','N'},
                        {'N','B','N','B','N','B','N','B'},
                        {'B','N','B','N','B','N','B','N'},
                        {'N','B','N','B','N','B','N','B'},
                        {'B','N','B','N','B','N','B','N'},
                        {'N','B','N','B','N','B','N','B'},
                        {'B','N','B','N','B','N','B','N'},
                        {'N','B','N','B','N','B','N','B'}};
    
    tablero[Xalfil-1][Yalfil-1]='*';
    
    for (int x=0;x<8;++x){
        
        for (int y=0;y<8;++y){
        
            if (abs(Xalfil-1-x)==abs(Yalfil-1-y)){
                
                if (tablero[x][y]!='*'){
                    
                    tablero[x][y]='m';    
                
                }
                
            }

        }
        
    }
    
    for (int x=0;x<8;++x){
        
        for (int y=0;y<8;++y){
            
            printf("%c ",tablero[x][y]);

        }

        printf("\n");

    }
    



}