#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3
// Función para imprimir una matriz
void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]); //Imprime cada elemento de la matriz
        }
        printf("\n");
    }
}
// Función para sumar dos matrices
void sumarMatrices(int matriz1[FILAS][COLUMNAS], int matriz2[FILAS][COLUMNAS], int resultado[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j]; //suma los elementos correspondientes 
        }
    }
}

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

    int resultado[FILAS][COLUMNAS]; // Matriz para almacenar el resultado de la suma

    printf("Matriz 1:\n");
    imprimirMatriz(matriz1); // imprime la primera matriz 

    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2); //imprime la segunda matriz 

    sumarMatrices(matriz1, matriz2, resultado); //suma las dos matrices 

    printf("\nResultado de la suma:\n");
    imprimirMatriz(resultado); //imprime resultado 

    return 0;
}