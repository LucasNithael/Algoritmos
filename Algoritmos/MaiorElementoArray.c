#include <stdio.h>

int maiorElement(int a[], int tamanho){
    int maior = a[0];
    for (int i = 1; i < tamanho; i++)
    {
        if(a[i]>maior){
            maior = a[i];
        }
    }
    return maior;
}

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int a[tamanho];
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Maior elemento: %d", maiorElement(a, tamanho));
    return 0;
}

