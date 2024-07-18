
#include <stdio.h>

int main() {
    int n, o, i, j;
    
    printf("Quantas linhas terá a matriz? ");
    scanf("%d", &n);
    
    printf("Quantas colunas terá a matriz? ");
    scanf("%d", &o);
    
    int mat[n][o];
        
    for (i = 0; i < n; i++) {  
        for (j = 0; j < o; j++) {  
            printf("Digite o valor da posição [%d][%d] da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz de entrada:\n");
    for (i = 0; i < n; i++) {  
        for (j = 0; j < o; j++) { 
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz transposta:\n");
    for (j = 0; j < o; j++) { 
        for (i = 0; i < n; i++) {  
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }  

    return 0;
}
