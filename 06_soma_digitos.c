
#include <stdio.h>

int soma_digitos(int N) {
    int soma = 0;
    while (N != 0) {
        soma += N % 10;
        N /= 10;
    }
    return soma;
}

int main() {
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("A soma dos dígitos é: %d
", soma_digitos(n));
    return 0;
}
