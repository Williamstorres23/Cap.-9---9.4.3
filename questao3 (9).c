#include <stdlib.h>
#include <stdio.h>


void imprimeNumeros(int N) {
    if (N < 0) {
        return;  
    }
    imprimeNumeros(N - 1); 
    printf("%d\n", N);      
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O valor de N deve ser um número inteiro não negativo.\n");
        return 1;
    }

    printf("Números de 0 a %d:\n", N);
    imprimeNumeros(N);

    return 0;
}
