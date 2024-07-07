#include <stdio.h>

#define FILAS 3       //define el numero de filas de la matriz
#define COLUMNAS 3    //define el numero de columnas de la matriz 

int main() {
    int matriz[FILAS][COLUMNAS]; // declara la matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    printf("Los elementos impares de la matriz son:\n");
    for (int i = 0; i < FILAS; i++) {           // Recorre las filas 
        for (int j = 0; j < COLUMNAS; j++) {    // Recorre las columnas 
            if (matriz[i][j] % 2 != 0) {        // Comprueba si el elemento es impar 
                printf("%d ", matriz[i][j]);    // Imprime el elemento si es impar 
            }
        }
    }
    printf("\n"); // Imprime un salto de línea 

    return 0;
}