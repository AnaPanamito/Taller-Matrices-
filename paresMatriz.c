#include <stdio.h>

#define FILAS 3       //define el numero de filas de la matriz
#define COLUMNAS 3    //define el numero de columnas de la matriz 

// Función para imprimir los elementos pares de la matriz
void imprimirPares(int matriz[FILAS][COLUMNAS]) {
    printf("Los elementos pares de la matriz son:\n");
    for (int i = 0; i < FILAS; i++) {           //recorre las filas 
        for (int j = 0; j < COLUMNAS; j++) {    //recorre las columnas 
            if (matriz[i][j] % 2 == 0) {        //comprueba si el elemento es par 
                printf("%d ", matriz[i][j]);    //imprime si es que el elemento es par 
            }
        }
    }
    printf("\n"); //imprime un salto de linea 
}

int main() {
    int matriz[3][3]; // declara una matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

     /*1 2 3 
      4 5 6 
      7 8 9 */ 


    imprimirPares(matriz);  // Llama a la función para imprimir los elementos pares

    return 0;
}