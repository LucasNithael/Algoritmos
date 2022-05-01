#include <stdio.h>

int main(){
    int i, tamanho;
    scanf("%d", &tamanho);
    int a[tamanho];
    for ( i = 0; i < tamanho; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Maior elemento %d\n", maiorElemento(a, tamanho));
    return 0;
}


int maiorElemento(int x[], int tamanho){
    int maior = x[0];
    for (int i = 1; i < tamanho; i++)
    {
        if (x[i]>maior)
        {
            maior = x[i];
        }
    }
    return maior;
}

