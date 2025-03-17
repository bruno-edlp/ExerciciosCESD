#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int* v, int n) {
    int i, fim, aux;
    for (fim = n - 1; fim > 0; --fim) {
        for (i = 0; i < fim; ++i) {
            if (v[i] > v[i + 1]) {
                aux = v[i];
                v[i] = v[i + 1];
                v[i + 1] = aux;
            }
        }
    }
}

int main() {
    int v[] = {17, 4, 6, 1, 72};
    int n = 5;

    BubbleSort(v, n);

    printf("\nVetor depois da ordenacao: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }

    return 0;
}
