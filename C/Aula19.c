#include <stdio.h>

void append_int(int *a, int *tamanho, int capacidade, int x, int *erro){
    *erro = 1;
    if(*tamanho!=capacidade){
        *(a+*tamanho)=x;
        (*tamanho)++;
        *erro=0;
    }
}

int main(){
    int capacidade=5, a[5], tamanho=0;
    int i, erro;
    for(i=0; i < 10; i++){
        append_int(a, &tamanho, capacidade, i*3, &erro);
        if(erro==1){
            printf("Erro de memória! \n");
            break;
        }
    } 
    printf("{");
        for(i = 0; i < tamanho; i++){
            printf("%d ", *(a+i));
        }
        printf("}");
    return 0;
}