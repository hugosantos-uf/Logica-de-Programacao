#include <stdio.h>

void ordenaVetor(int vet[], int n) {
    int i, aux, cont;
    for(cont=0; cont<n; cont++){
        for (i = 0; i < n; i++) {  
            if (vet[i] < vet[i+1]){
                aux = vet[i];
                vet[i] = vet[i+1];
                vet[i+1]=aux;
             }
        }
    }
    printf("vetor ordenado = ");
    for (i = 0; i < n; i++) {  
        printf("%d ", vet[i]);
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
    ordenaVetor(vet, n);
    return 0;
}