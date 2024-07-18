
#include <stdio.h>

int main() {
    int n, x = 1;
    printf("Digite um numero positivo N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        x *= i;
    }
    printf("O fatorial de %d é %d
", n, x);
    return 0;
}
