#include <stdio.h>
void dobra(int *v, int n) {
    int i = 0;
    while (i < n) {
        *(v + i) = *(v + i) * 2;
        i++;
    }
}
int main(void) {
    int numeros[5] = {1, 2, 3, 4, 5};
    dobra(numeros, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}
