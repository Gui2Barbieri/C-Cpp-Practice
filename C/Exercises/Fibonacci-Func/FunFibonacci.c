#include <stdio.h>

void serieFibonacci(void){

    int f[10];
    
    f[0]=0;
    f[1]=1;

    for (int i=2;i<10;++i){
        
        f[i]=f[i-2]+f[i-1]; 

    }
    
    for (int i=0;i<10;++i){
        
        printf("%d\n",f[i]);
    
    }

}


int main(void){

    serieFibonacci();

}