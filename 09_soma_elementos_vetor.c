
#include <stdio.h>

int somaVetor(int N) {
    int i;
    int vet[N];
    int soma = 0; // Inicializar a variável soma

    for (i = 0; i < N; i++) {  
        printf("Digite o valor numero %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
        soma += vet[i];
    }
    return soma;
}

int main() {
    int n;
    printf("Qual sera o tamanho do vetor? ");
    scanf("%d", &n);
    printf("A soma dos valores do vetor é: %d\n", somaVetor(n));
    return 0;
}
