
#include <stdio.h>

int main() {
    int n, x = 0;
    printf("Digite um numero positivo N: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        x += i;
    }
    printf("A soma dos N primeiros números positivos é %d
", x);
    return 0;
}
