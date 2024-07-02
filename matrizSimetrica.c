#include <stdio.h> //entrada y salida de datos 
#include <stdlib.h> //para la gestion de memoria, conversiones numericas entre otras  
#include <time.h> /*se usa aquí para crear una fuente de aleatoriedad real, asegurando que 
                    la matriz simétrica generada sea diferente en cada ejecución del
                    programa.*/

// Función para generar una matriz simétrica
void generarMatrizSimetrica(int n, int matriz[n][n]) {
    // Rellenar la matriz
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (i == j) {
                // Los elementos de la diagonal pueden ser cualquier valor
                matriz[i][j] = rand() % 100; // Ejemplo: genera valores entre 0 y 99
            } else {
                // Los elementos fuera de la diagonal deben ser iguales a su transpuesto
                int valor = rand() % 100;
                matriz[i][j] = valor;
                matriz[j][i] = valor; //asegura la simetria 
            }
        }
    }
}

// Función para imprimir la matriz
void imprimirMatriz(int n, int matriz[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]); //imprime cada elemento de la matriz 
        }
        printf("\n"); //salto de linea 
    }
}

int main() {
    srand(time(0)); // Inicializar la semilla del generador de números aleatorios

    int n = 3; // Tamaño de la matriz
    int matriz[n][n]; //declara la matriz 

    generarMatrizSimetrica(n, matriz); //genera una matriz simetrica

    printf("Matriz simetrica:\n");
    imprimirMatriz(n, matriz); //imprime la matriz generada 

    return 0;
}
