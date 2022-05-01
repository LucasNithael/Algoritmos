#include <stdio.h>

int main(){
    int n, i, soma;
    scanf("%d", &n);
    for (i = 0; i <= n ; i++){
        soma += i;
    }
    printf("Soma: %d\n", soma);
}