
#include <stdio.h>

float media(float s, float d) {
    return s / d;
}

int main() {
    float n, soma = 0;
    int i = 0;
    printf("Digite valores (0 para parar): 
");
    do {
        scanf("%f", &n);
        if (n != 0) {
            soma += n;
            i++;
        }
    } while (n != 0);
    if (i > 0) {
        printf("A média dos valores é: %.2f
", media(soma, i));
    } else {
        printf("Nenhum valor válido foi inserido.
");
    }
    return 0;
}
