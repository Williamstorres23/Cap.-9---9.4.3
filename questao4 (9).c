#include <stdlib.h>
#include <stdio.h>


void imprimeDecrescente(int N) {
    if (N < 0) {
        return;  
    }
    printf("%d\n", N);      
    imprimeDecrescente(N - 1);  
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("O valor de N deve ser um número inteiro não negativo.\n");
        return 1;
    }

    printf("Números de %d a 0:\n", N);
    imprimeDecrescente(N);

    return 0;
}
