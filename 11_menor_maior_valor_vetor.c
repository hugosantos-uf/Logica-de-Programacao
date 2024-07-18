
#include <stdio.h>
#include <limits.h> // Para usar INT_MAX e INT_MIN

void buscaExtremosVetor(int vet[], int n) {
    int i, menor = INT_MAX, maior = INT_MIN;
    for (i = 0; i < n; i++) {  
        if (menor > vet[i]) {
            menor = vet[i];
        }
        if (maior < vet[i]) {
            maior = vet[i];
        }
    }
    printf("Menor valor = %d, Maior valor = %d\n", menor, maior);
}

int main() {
    int n, i;
    
    printf("Qual sera o tamanho do vetor? ");
    scanf("%d", &n);
    
    int vet[n];
        
    for (i = 0; i < n; i++) {  
        printf("Digite o valor numero %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }
    buscaExtremosVetor(vet, n);
    return 0;
}
