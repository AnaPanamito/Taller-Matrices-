#include <stdio.h>
#define FILAS 3        //define el numero de filas de la matriz 
#define COLUMNAS 3     //define el numero de columnas de la matriz 

//funcion para imprimir los elementos de las esquinas de la matriz 
void imprimirEsquinas(int matriz[FILAS][COLUMNAS]) {
    printf("LOS ELEMENTOS DE LAS ESQUINAS SON:\n");
    printf("Esquina superior izquierda: %d\n", matriz[0][0]);
    printf("Esquina superior derecha: %d\n", matriz[0][COLUMNAS-1]);
    printf("Esquina inferior izquierda: %d\n", matriz[FILAS-1][0]);
    printf("Esquina inferior derecha: %d\n", matriz[FILAS-1][COLUMNAS-1]);
}

int main() {
    int matriz[3][3]; // declara la matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;
    /*1 2 3   parte superior 
      4 5 6 
      7 8 9 */ // parte inferior 

    imprimirEsquinas(matriz); // llama a la funcion   para imprimir las esquinas 
    return 0;
}