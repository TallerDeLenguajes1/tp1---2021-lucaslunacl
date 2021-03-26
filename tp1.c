#include <stdio.h>

int main(){
    int v1= 6;
    int *puntero = &v1;
    printf("Contenido del puntero %d", *puntero);
    printf("\nDireccion de memoria almacenada por el puntero %x", puntero);
    printf("\nDireccion de memoria de la variable %x", &v1);
    printf("\nDireccion de memoria del puntero: %x", &puntero);
    printf("\nTamaño de memoria de variable con sizeof(): %d", sizeof(v1));



    
    
    return 0;
}