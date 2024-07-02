#include <stdio.h>

#define FILAS 3     // Define el número de filas de la matriz
#define COLUMNAS 3   // Define el número de columnas de la matriz

//funcion para imprimir una matriz 
void imprimirMatriz(int matriz[FILAS][COLUMNAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("%d ", matriz[i][j]); //imprime cada elemento de la matriz 
        }
        printf("\n"); //imprime salto de linea 
    }
}
//funcion para transporner una matriz 
void transponer(int matriz[FILAS][COLUMNAS], int transpuesta[COLUMNAS][FILAS]) {
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            transpuesta[j][i] = matriz[i][j]; //intercambia filas por columnas 
        }
    }
}

int main() {
    int matriz[3][3]; // matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    int transpuesta[3][3]; //matriz para almacenar la tranpuesta 

    printf("Matriz original:\n");
    imprimirMatriz(matriz); //imprime la matriz original 

    transponer(matriz, transpuesta); //calcula la matriz trnapuesta 

    printf("\nMatriz transpuesta:\n");
    imprimirMatriz(transpuesta); //imprime la matriz trnspuesta 

    return 0;
}