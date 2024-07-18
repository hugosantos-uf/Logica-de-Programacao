
#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    printf("Digite um numero positivo N: ");
    scanf("%d", &N);
    if (eh_primo(N)) {
        printf("O número %d é primo
", N);
    } else {
        printf("O número %d não é primo
", N);
    }
    return 0;
}
