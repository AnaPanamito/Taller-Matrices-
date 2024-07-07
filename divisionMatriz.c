#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3
 
int main() {
    int matriz1[FILAS][COLUMNAS]; // primera matriz 
    matriz1[0][0] = 1;
    matriz1[0][1] = 2;
    matriz1[0][2] = 3;
    matriz1[1][0] = 4;
    matriz1[1][1] = 5;
    matriz1[1][2] = 6;
    matriz1[2][0] = 7;
    matriz1[2][1] = 8;
    matriz1[2][2] = 9;

    int matriz2[FILAS][COLUMNAS]; // segunda matriz 
    matriz2[0][0] = 9;
    matriz2[0][1] = 8;
    matriz2[0][2] = 7;
    matriz2[1][0] = 6;
    matriz2[1][1] = 5;
    matriz2[1][2] = 4;
    matriz2[2][0] = 3;
    matriz2[2][1] = 2;
    matriz2[2][2] = 1;

    int resultado[FILAS][COLUMNAS]; 

    // Imprime la primera matriz
    printf("Matriz 1:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz1[i][j]);
        }
        printf("\n");
    }

    // Imprime la segunda matriz
    printf("\nMatriz 2:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }

    // Divide las dos matrices
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            if (matriz2[i][j] != 0) {
                resultado[i][j] = matriz1[i][j] / matriz2[i][j]; // Divide los elementos correspondientes
            } else {
                printf("Error: Division por cero en la posicion [%d][%d]\n", i, j);
                resultado[i][j] = 0; // Asigna 0 en caso de división por cero
            }
        }
    }

    // Imprime el resultado de la división en decimal
    printf("\nResultado de la division:\n");
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 