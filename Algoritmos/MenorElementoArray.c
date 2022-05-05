#include <stdio.h>

int menorElementoArray(int a[], int tamanho){
    int i, menor=a[0];
    for(i=1; i<tamanho; i++){
        if(a[i]<menor){
            menor = a[i];
        }
    }
    return menor;
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int a[tamanho];
    for(int i=0; i<tamanho; i++){
        scanf("%d", &a[i]);
    }
    printf("Menor Elemento: %d \n", menorElementoArray(a, tamanho));
    return 0;
}