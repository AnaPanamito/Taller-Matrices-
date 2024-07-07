#include <stdio.h>

#define N 3    // Define el N que va ser igual a 3 

int main() {
    int matriz[N][N]; // Matriz de 3x3
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;  

    int transpuesta[N][N]; // Matriz para almacenar la transpuesta

    // Transponer la matriz
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            transpuesta[j][i] = matriz[i][j]; // Intercambia filas por columnas
        }
    }

    // Imprimir la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[i][j]); // Imprime cada elemento de la matriz
        }
        printf("\n"); // Imprime salto de línea
    }

    // Imprimir la matriz transpuesta
    printf("\nMatriz transpuesta:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", transpuesta[i][j]); // Imprime cada elemento de la matriz transpuesta
        }
        printf("\n"); // Imprime salto de línea
    }

    return 0;
}