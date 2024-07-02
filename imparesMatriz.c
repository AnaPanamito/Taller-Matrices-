#include <stdio.h>

#define FILAS 3       //define el numero de filas de la matriz
#define COLUMNAS 3    //define el numero de columnas de la matriz 

// Función para imprimir los elementos impares de la matriz
void imprimirImpares(int matriz[FILAS][COLUMNAS]) {
    printf("Los elementos impares de la matriz son:\n");
    for (int i = 0; i < FILAS; i++) {           //recorre las filas 
        for (int j = 0; j < COLUMNAS; j++) {    //recorre las columnas 
            if (matriz[i][j] % 2 != 0) {        //comprueba si el elemento es impar 
                printf("%d ", matriz[i][j]);    //imprime si es que el elemento es par 
            }
        }
    }
    printf("\n"); //imprime salto de linea 
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
    
    imprimirImpares(matriz); // Llama a la función para imprimir los elementos impares

    return 0;
}