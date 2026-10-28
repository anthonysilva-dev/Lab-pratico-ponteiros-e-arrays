#include <stdio.h>
int main(void) {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int linha = 0;
    while (linha < 3) {
        int total = 0;
        for (int coluna = 0; coluna < 3; coluna++) {
            total = total + matriz[linha][coluna];
        }
        printf("Linha %d: %d\n", linha, total);
        linha++;
    }
    return 0;
}
