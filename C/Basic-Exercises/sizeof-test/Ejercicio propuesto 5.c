#include <stdio.h>
#include <stdbool.h>

int main(){
    short a {sizeof a};
    int c {sizeof c};
    long d {sizeof d};
    float f {sizeof f};
    double e {sizeof e};
    bool g {sizeof g};

    printf("char = %d bytes\nshort = %hi\nint = %d\nlong = %li\nfloat = %f\ndouble = %lf\nbool = %d\n",sizeof(char),a,c,d,f,e,g);



}