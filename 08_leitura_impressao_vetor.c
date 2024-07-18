
#include <stdio.h>

void lerEImprimirVetor(int N) {
    int i;
    int vet[N];
    for (i = 0; i < N; i++) {  
        printf("Digite o valor numero %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    for (i = 0; i < N; i++) {  
        printf("%d ", vet[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Qual sera o tamanho do vetor? ");
    scanf("%d", &n);
    lerEImprimirVetor(n);
    return 0;
}
