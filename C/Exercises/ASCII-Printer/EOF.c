/* Código ASCII de cada uno de los caracteres de un texto
* while04.c
*/
#include <stdio.h>
int main(void)
{ 
char car = 0; // car = carácter nulo (\0)
printf("Introduzca una cadena de texto.\n"); 
printf("Para terminar EOF\n"); // Windows: Ctrl+z, Linux: Ctrl+d
while ((car = getchar()) != EOF)
{
if (car != '\n')
printf("El código ASCII de %c es %d\n", car, car);
}
}