#include <stdio.h>
int main(void) {
    int numeros[5];
    int maior = 0;
    int soma = 0;
    printf("Digite 5 inteiros: ");
    for (int i = 0; i < 5; i++) {
        if (scanf("%d", &numeros[i]) != 1) {
            return 1;
        }
        soma = soma + numeros[i];
        if (i == 0 || numeros[i] > maior) {
            maior = numeros[i];
        }
    }
    printf("Maior: %d\n", maior);
    printf("Media: %.2f\n", soma / 5.0);
    return 0;
}
