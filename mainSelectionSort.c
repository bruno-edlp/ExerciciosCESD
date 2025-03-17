#include <stdio.h>
#include <stdlib.h>

void selection_sort(int*v,int n){
    int i,j,min,aux;
    for(i = 0;i<(n-1);i++){
        min = i;
        for(j = (i+1); j<n ;j++ ){
            if(v[j]<v[min]){
                min = j;
            }
        }
        if(v[i] != v[min]){
            aux = v[i];
            v[i] = v[min];
            v[min] = aux;
        }
    }
}
int main()
{
    int v[] = {78, 6, 9, 4, 1};
    int n = 5;

    selection_sort(v,n);

    for(int i=0; i<n;i++ ) {
        printf("%d ",v[i]);
    }
    return 0;
}
