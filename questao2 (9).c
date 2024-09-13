#include <stdlib.h>
#include <stdio.h>


int somaNumeros(int N) {
    if (N <= 0) {
        return 0;  
    } else if (N == 1) {
        return 1;  
    } else {
        return N + somaNumeros(N - 1); 
    }
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("O valor de N deve ser um número inteiro positivo.\n");
        return 1;
    }

    int resultado = somaNumeros(N);
    printf("A soma dos números de 1 a %d é: %d\n", N, resultado);

    return 0;
}
