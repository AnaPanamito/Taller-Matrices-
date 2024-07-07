#include <stdio.h>
#define N 3

int main() {  // A es la matriz original 
   int A[N][N]; 
    A[0][0] = 1;
    A[0][1] = 2;
    A[0][2] = 3;
    A[1][0] = 4;
    A[1][1] = 5;
    A[1][2] = 6;
    A[2][0] = 7;
    A[2][1] = 8;
    A[2][2] = 9;
    //MATRIZ ORIGINAL 
    /*1 2 3   
      4 5 6        
      7 8 9 */  
    int resultado[N][N], temp[N][N];
    int potencia = 3;
    
    for (int i = 0; i < N; i++) { // Inicializar resultado como matriz identidad
        for (int j = 0; j < N; j++) {
            resultado[i][j] = (i == j) ? 1 : 0;
        }
    }
    while (potencia > 0) { // Calcular la potencia de la matriz
        if (potencia % 2 == 1) {
            for (int i = 0; i < N; i++) {  // Multiplicar el resultado por A
                for (int j = 0; j < N; j++) {
                    temp[i][j] = 0;
                    for (int k = 0; k < N; k++) {
                        temp[i][j] += resultado[i][k] * A[k][j]; //temp almacena el resultado de A * A.
                    }
                }
            }
            for (int i = 0; i < N; i++) { // Copiar el resultado temporal 
                for (int j = 0; j < N; j++) {
                    resultado[i][j] = temp[i][j]; 
                }
            }
        }
        for (int i = 0; i < N; i++) { // Multiplicar A por sí misma
            for (int j = 0; j < N; j++) {
                temp[i][j] = 0;
                for (int k = 0; k < N; k++) {
                    temp[i][j] += A[i][k] * A[k][j];
                }
            }
        }
        for (int i = 0; i < N; i++) { // Copiar el temporal en A 
            for (int j = 0; j < N; j++) {
                A[i][j] = temp[i][j];
            }
        }
        potencia /= 2;
    }
    printf("\n La Matriz original elevada a la potencia 3 es igual a:\n"); // Imprime resultado 
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
