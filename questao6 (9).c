#include <stdlib.h>
#include <stdio.h>


int somaVetor(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0;  
    } else {
        return vetor[tamanho - 1] + somaVetor(vetor, tamanho - 1);  
    }
}


double mediaVetor(int vetor[], int tamanho) {
    if (tamanho <= 0) {
        return 0;  
    }
    int soma = somaVetor(vetor, tamanho);  
    return (double)soma / tamanho; 
}

int main() {
    int vetor[] = {10, 20, 30, 40, 50};  
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);  

    double resultado = mediaVetor(vetor, tamanho);
    printf("A média dos elementos do vetor é: %.2f\n", resultado);

    return 0;
}
