#include <stdio.h>

// Función para multiplicar dos matrices de 3x3
void multiplicarMatrices(int matriz1[3][3], int matriz2[3][3], int resultado[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultado[i][j] = 0; // Inicializar el elemento de resultado en 0
            for (int k = 0; k < 3; k++) {
                //Multiplica la fila i de matriz1 por la columna j de matriz2
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
            }
        }
    }
}

// Función para imprimir una matriz de 3x3
void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]); //imprime cada elemento de la matriz 
        }
        printf("\n");
    }
}

int main() {
    int matriz1[3][3]; // primera matriz 
    matriz1[0][0] = 1;
    matriz1[0][1] = 2;
    matriz1[0][2] = 3;
    matriz1[1][0] = 4;
    matriz1[1][1] = 5;
    matriz1[1][2] = 6;
    matriz1[2][0] = 7;
    matriz1[2][1] = 8;
    matriz1[2][2] = 9;

    int matriz2[3][3]; // segunda matriz 
    matriz2[0][0] = 9;
    matriz2[0][1] = 8;
    matriz2[0][2] = 7;
    matriz2[1][0] = 6;
    matriz2[1][1] = 5;
    matriz2[1][2] = 4;
    matriz2[2][0] = 3;
    matriz2[2][1] = 2;
    matriz2[2][2] = 1;
   
    int resultado[3][3]; //matriz para almacenar el resultado de la multiplicacion 

    // Realizar la multiplicación de las matrices
    multiplicarMatrices(matriz1, matriz2, resultado);

    // Imprimir las matrices
    printf("Matriz 1:\n");
    imprimirMatriz(matriz1);

    printf("\nMatriz 2:\n");
    imprimirMatriz(matriz2);

    printf("\nResultado de la multiplicación (Matriz 1 * Matriz 2):\n");
    imprimirMatriz(resultado);

    return 0;
}
