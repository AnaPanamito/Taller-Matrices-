#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAIPES 52  //define el número máximo de naipes en un mazo de cartas estándar (52).

// Estructura para representar una carta
typedef struct {
    int numero;
    char simbolo;
} Carta;

// Tabla de símbolos
const char* obtenerPalo(char simbolo) {
    switch(simbolo) {                       /*El case se usa dentro de una estructura switch en C
                                            case es una estructura condicional que ejecuta diferentes 
                                            bloques de instrucciones dependiendo del valor de una variable*/
        case 'T': return "Trebol";
        case 'D': return "Diamante";
        case 'C': return "Corazon";
        case 'P': return "Pica";
        default: return "Desconocido";
    }
}

// Función para comparar cartas 
int compararCartas(const void *a, const void *b) {
    return ((Carta *)b)->numero - ((Carta *)a)->numero;
}

int main() {
    int n;
    Carta naipes[MAX_NAIPES];

    // Solicitar el número de naipes
    printf("Ingrese el numero de naipes (limite maximo 52): ");
    scanf("%d", &n);

    if (n <= 0 || n > MAX_NAIPES) {
        printf("Numero de naipes invalido.\n");
        return 1;
    }

    // Ingresar los datos de cada naipe
    printf("\tSimbolos: T (Trebol), D (Diamante), C (Corazon), P (Pica)\n");
    for (int i = 0; i < n; i++) {
        printf("Ingrese el numero y simbolo del naipe %d (ejemplo: 10 C): ", i + 1);
        scanf("%d %c", &naipes[i].numero, &naipes[i].simbolo);
        
        // Convertir J, Q, K, A a números
        if (naipes[i].numero == 1) naipes[i].numero = 14;  // As
        else if (naipes[i].numero == 11) naipes[i].numero = 11;  // J
        else if (naipes[i].numero == 12) naipes[i].numero = 12;  // Q
        else if (naipes[i].numero == 13) naipes[i].numero = 13;  // K
    }

    // Ordenar los naipes
    qsort(naipes, n, sizeof(Carta), compararCartas);

    // Imprimir los naipes ordenados
    printf("\nNaipes ordenados de mayor a menor:\n");
    for (int i = 0; i < n; i++) {
        // Convertir números de vuelta a J, Q, K, A para la impresión
        if (naipes[i].numero == 14) printf("A");
        else if (naipes[i].numero == 11) printf("J");
        else if (naipes[i].numero == 12) printf("Q");
        else if (naipes[i].numero == 13) printf("K");
        else printf("%d", naipes[i].numero);

        printf(" de %s\n", obtenerPalo(naipes[i].simbolo));
    }

    return 0;
}