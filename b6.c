#include <stdio.h>
int main(void) {
    int valores[10];
    for (int i = 0; i < 10; i++) {
        valores[i] = i + 1;
    }
    printf("Ultimo elemento valido: %d\n", valores[9]);
    fflush(stdout);
    /* Acesso fora do vetor para testar o AddressSanitizer. */
    valores[10] = 50;
    printf("Fim do programa\n");
    return 0;
}
