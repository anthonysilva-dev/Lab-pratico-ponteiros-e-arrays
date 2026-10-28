#include <stdio.h>
int main(void) {
    char palavra[50];
    int letras = 0;
    printf("Palavra: ");
    if (scanf("%49s", palavra) != 1) {
        return 1;
    }
    for (int i = 0; palavra[i] != '\0'; i++) {
        letras++;
    }
    while (letras > 0) {
        letras--;
        putchar(palavra[letras]);
    }
    putchar('\n');
    return 0;
}
