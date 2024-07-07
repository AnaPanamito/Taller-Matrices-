#include <stdio.h>

#define N 3 // Define el tamaño de la matriz

int main() {
    // Definición de la matriz original
    float A[N][N] = {
        {1, 2, 5},
        {1, 3, 2},
        {2, 4, 9}};
    float inverse[N][N]; // Matriz para almacenar la inversa
    float det = 0;

    // Cálculo del determinante
    det = A[0][0] * (A[1][1] * A[2][2] - A[2][1] * A[1][2])
        - A[0][1] * (A[1][0] * A[2][2] - A[1][2] * A[2][0])
        + A[0][2] * (A[1][0] * A[2][1] - A[1][1] * A[2][0]);
    
    // Comprobación si el determinante es cero
    if (det == 0) {
        printf("La matriz no tiene inversa.\n");
        return 0;
    }

    // Cálculo de la matriz inversa
    float invDet = 1.0f / det; // Inversa del determinante

    // Cálculo de cada elemento de la matriz inversa
    inverse[0][0] = (A[1][1] * A[2][2] - A[2][1] * A[1][2]) * invDet;
    inverse[0][1] = (A[0][2] * A[2][1] - A[0][1] * A[2][2]) * invDet;
    inverse[0][2] = (A[0][1] * A[1][2] - A[0][2] * A[1][1]) * invDet;
    inverse[1][0] = (A[1][2] * A[2][0] - A[1][0] * A[2][2]) * invDet;
    inverse[1][1] = (A[0][0] * A[2][2] - A[0][2] * A[2][0]) * invDet;
    inverse[1][2] = (A[1][0] * A[0][2] - A[0][0] * A[1][2]) * invDet;
    inverse[2][0] = (A[1][0] * A[2][1] - A[2][0] * A[1][1]) * invDet;
    inverse[2][1] = (A[2][0] * A[0][1] - A[0][0] * A[2][1]) * invDet;
    inverse[2][2] = (A[0][0] * A[1][1] - A[1][0] * A[0][1]) * invDet;

    // Impresión de la matriz original
    printf("Matriz original:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.1f\t", A[i][j]); // Imprime cada elemento con un decimal
        }
        printf("\n"); // Salto de línea
    }

    // Impresión de la matriz inversa
    printf("\nMatriz inversa:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.1f\t", inverse[i][j]); // Imprime cada elemento con un decimal
        }
        printf("\n"); // Salto de línea
    }

    return 0;
}
