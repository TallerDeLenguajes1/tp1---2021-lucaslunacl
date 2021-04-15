#include <stdio.h>
#include <stdlib.h>
const  int filas = 2;
const int columnas = 3;

int main(){
    int ** matriz = (int **) malloc(sizeof(int) * filas); // reserva dinamica de filas con punteros dobles
    for (int i = 0; i < filas; i++)
    {   
        matriz[i] = (int *) malloc(sizeof(int) * columnas); // apunto al puntero simple con el puntero doble
        for (int j = 0; j < columnas; j++)
        {
            matriz [i][j] = j;
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }
    
}