#include <stdio.h>
int main(void) {
    int v[4] = {10, 20, 30, 40};
    double d[4] = {1.5, 2.5, 3.5, 4.5};
    printf("Vetor de int:\n");
    for (int i = 0; i < 4; i++) {
        printf("v[%d]: %p\n", i, (void *)(v + i));
    }
    printf("Vetor de double:\n");
    for (int i = 0; i < 4; i++) {
        printf("d[%d]: %p\n", i, (void *)(d + i));
    }
    return 0;
}
