#include <stdio.h> //entrada y salida de datos 
#include <stdlib.h> // aqui nos sirve para la generación de Números Aleatorios donde utilizamos rand() y srand().
#include <time.h> /*se usa aquí para crear una fuente de aleatoriedad real, asegurando que 
                    la matriz simétrica generada sea diferente en cada ejecución del
                    programa.*/

// Función para imprimir la matriz
void imprimirMatriz(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]); // Imprime cada elemento de la matriz
        }
        printf("\n"); // Salto de línea después de cada fila
    }
}

int main() {
    srand(time(0)); // Inicializa el generador de números aleatorios con el tiempo actual

    int n = 3; // Tamaño de la matriz
    int matriz[n][n]; // Declara la matriz de tamaño n x n

    // Generación de la matriz simétrica
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == j) {
                matriz[i][j] = rand() % 100; // Ejemplo: genera valores entre 0 y 99
            } else {
                int valor = rand() % 100;
                matriz[i][j] = valor; // Elementos fuera de la diagonal principal
                matriz[j][i] = valor; // asegura la simetria 
            }
        }
    }

    // Imprime la matriz simétrica generada
    printf("Matriz simetrica:\n");
    imprimirMatriz(n, matriz);

    return 0;
}
