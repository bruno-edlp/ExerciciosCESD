#include <stdio.h>
#include <stdlib.h>


void BubbleSort(int* v, int n){
    int i, fim, aux;
    for(fim = n-1; fim > 0; --fim){
        for(i = 0; i < fim; ++i){
            if(v[i] > v[i+1]){
                aux = v[i];
                v[i] = v[i+1];
                v[i+1] = aux;
            }
        }
    }
}

void printArray(int* v, int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main()
{
   int numeros[] = {5, 3, 8, 1, 2};
   int tamanho = sizeof(numeros) / sizeof(numeros[0]);

   printf("Antes da ordenacao : \n");
   printArray(numeros, tamanho);

   BubbleSort(numeros, tamanho);

   printf("Depois da ordenacao: \n");
   printArray(numeros, tamanho);

   return 0;
}
