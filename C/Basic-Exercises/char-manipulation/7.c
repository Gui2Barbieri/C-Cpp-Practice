#include <stdio.h>
int main(void)
{
char car1 = 'A', car2 = 65, car3 = 0;
car3 = car1 + 'a' - 'A'; //asumo que queda "a"
printf("%d %c\n", car3, car3);//el valor entero de a, y a en si.
car3 = car2 + 32; //97
printf("%d %c\n", car3, car3); //97 y su valor en ascii
}