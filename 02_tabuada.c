
#include <stdio.h>

int main() {
    int n;
    printf("Digite um numero positivo N: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d
", n, i, n * i);
    }
    return 0;
}
