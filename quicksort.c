#include <stdio.h>

// Função para trocar dois elementos no array
void swap(int array[], int i, int j) {
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

// Função para encontrar a partição correta do array
int partition(int array[], int low, int high) {
    int pivot = array[high];  // pivô
    int i = low - 1;  // índice do menor elemento

    for (int j = low; j < high; j++) {
        // Se o elemento atual for menor que o pivô
        if (array[j] < pivot) {
            i++;
            swap(array, i, j);
        }
    }
    swap(array, i + 1, high);
    return i + 1;
}

// Função principal do Quick Sort
void quickSort(int array[], int low, int high) {
    if (low < high) {
        // índice de partição, array[p] está no lugar certo
        int pi = partition(array, low, high);

        // Ordena separadamente os elementos antes e depois da partição
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// Função para imprimir o array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int n, i;
    
    printf("Qual sera o tamanho do vetor? ");
    scanf("%d", &n);
    
    int array[n];
        
    for (i = 0; i < n; i++) {  
        printf("Digite o valor numero %d do vetor: ", i + 1);
        scanf("%d", &array[i]);
    }
    
    printf("Array inicial: \n");
    printArray(array, n);
    quickSort(array, 0, n - 1);
    printf("Array ordenado: \n");
    printArray(array, n);
    return 0;
}
