#include <stdio.h>

#define FILAS 3 // Define el número de filas de la matriz
#define COLUMNAS 3 // Define el número de filas de la matriz

int main() {
   // Declara e inicializa una matriz de 3x3
   int matriz[3][3]; 
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // Calcula el número de filas
    // sizeof(matriz) da el tamaño total de la matriz 
    // sizeof(matriz[0]) da el tamaño de una fila 
    int numFilas = sizeof(matriz) / sizeof(matriz[0]);
    // Calcula el número de columnas
    // sizeof(matriz[0]) da el tamaño de una fila 
    // sizeof(matriz[0][0]) da el tamaño de un elemento 
    int numColumnas = sizeof(matriz[0]) / sizeof(matriz[0][0]);

    //imprime los resultados 
    printf("La matriz tiene:\n");
    printf("Numero de filas: %d\n", numFilas);
    printf("Numero de columnas: %d\n", numColumnas);

    return 0;
}
