#include <stdio.h>

//Declaro las funciones
int cuadrado(int n);
void cuadradoVoid(int *n);
void invertir(int *a, int *b);
void orden(int *a ,int *b);

//Funcion principal
int main(){
    int num;
    printf("Elija un numero para realizar las funciones\n");
    scanf("%d", &num);
    // declaro variable para asignarle la funcion cuadrado
    int funcionCuadrado;
    funcionCuadrado = cuadrado(num);
    printf("El numero elegido fue %d, Su cuadrado es: %d\n", num, funcionCuadrado);


    // llamo a la funcion cuadradoVoid
    cuadradoVoid(&num);
    printf("El numero elegido fue %d\n", num);

    // llamo a la funcion invertir
    int num1,num2;
    printf("Elija un dos numeros para invertir y ordenar\n");
    scanf("%d %d", &num1,&num2);
    invertir(&num1,&num2);
    printf("Invertido: %d %d \n", num1, num2);


    //llamo a la funcion orden
    orden(&num1,&num2);
    printf("orden: %d %d\n", num1, num2);
    getchar();
    return 0;
}

// Defino las Funciones
// Funcion INT CUADRADO
int cuadrado(int n){
    int resultado = n*n;
    return resultado;
}

// Funcion Void CUADRADO
void cuadradoVoid(int *n){
    *n *= *n;
}
// defino las funciones invertir y orden
void invertir(int *a, int *b){
    int v1,v2;
    v1 = *a;
    v2 = *b;
    *a=v2;
    *b=v1;
}

void orden(int *a , int *b){
    if (*a > *b){
        invertir(a,b);
    }
}