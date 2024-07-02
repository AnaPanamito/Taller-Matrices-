#include <stdio.h>

#define FILAS 3 // Define el número de filas de la matriz
#define COLUMNAS 3 // Define el número de columnas de la matriz

// Función para imprimir los elementos que no están en las esquinas de la matriz
void imprimirNoEsquinas(int matriz[FILAS][COLUMNAS]) {
    printf("Los elementos que no estan en las esquinas son:\n");
    for (int i = 0; i < FILAS; i++) { // Recorre las filas
        for (int j = 0; j < COLUMNAS; j++) { // Recorre las columnas
            // Verifica si el elemento actual no está en una esquina
            if ((i != 0 && i != FILAS-1) || (j != 0 && j != COLUMNAS-1)) {
                printf("%d ", matriz[i][j]); // Imprime el elemento si no está en una esquina
            }
        }
    }
    printf("\n"); /*salto de linea */
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
    
    imprimirNoEsquinas(matriz); // Llama a la función para imprimir los elementos que no están en las esquinas

    return 0;
}