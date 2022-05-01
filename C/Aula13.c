#include <stdio.h>

int main(){
    int i, usado=0, capacidade=1000, numero;
    int a[capacidade];
    scanf("%d", &numero);
    while(numero != -1){
        a[usado] = numero;
        usado ++;
        scanf("%d", &numero);
    }
    printf("a = { ");
    for ( i = 0; i < usado; i++){
        printf("%d, ", a[i]);
    }
    printf("}");
}