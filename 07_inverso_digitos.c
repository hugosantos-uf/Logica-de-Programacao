
#include <stdio.h>

void inverso(int N) {
    while (N != 0) {
        printf("%d", N % 10);
        N /= 10;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("O inverso dos dígitos é: ");
    inverso(n);
    return 0;
}
