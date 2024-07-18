
#include <stdio.h>

void buscaVetor(int vet[], int n) {
    int i, v, aux = 0;
    printf("Qual valor deseja buscar? ");
    scanf("%d", &v);
    for (i = 0; i < n; i++) {  
        if (vet[i] == v) {
            printf("Valor encontrado no vetor na posição vet[%d]\n", i);
            aux = 1;
            break;
        }
    }
    if (aux == 0) {
        printf("Valor não encontrado no vetor\n");
    }
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
    buscaVetor(vet, n);
    return 0;
}
