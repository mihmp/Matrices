#include <stdio.h>

int main() {
    int n;

    // Solicitar al usuario ingresar el tamaño de la matriz
    printf("Ingrese el tamaño de la matriz: ");
    scanf("%d", &n);

    // Verificar que el tamaño ingresado sea mayor que 0 y menor o igual a 5
    if (n <= 0 || n > 5) {
        printf("El tamaño de la matriz debe estar entre 1 y 5.\n");
        return 1;  // Terminar el programa con un código de error
    }

    // Declarar la matriz con el tamaño ingresado por el usuario
    int Matrix[5][5];

    // Inicializar la matriz con 0s
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            Matrix[i][j] = 0;
        }
    }

    // Hacer que la diagonal principal sea 1s
    for (int i = 0; i < n; i++) {
        Matrix[i][i] = 1;
    }

    // Imprimir la matriz
    printf("Matriz resultante:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
