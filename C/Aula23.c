#include <stdio.h>
#include <stdlib.h> // Funções de gerenciamento de memória
#include <time.h>

//AUMENTAR A CAPACIDADE DO VETOR DE FORMA DINÂMICA

int * append_int(int *a, int *tamanho, int *capacidade, int x, int *erro){
    *erro = 1;
    if(*tamanho==*capacidade){
        *capacidade = *capacidade+10;
        int *novo = (int*)malloc(sizeof(int)*(*capacidade));
        int *antigo = a;
        int i;
        for(i=0 ; i<*tamanho ; i++)
            *(novo+i) /*novo[i]*/ = *(a+i);
        a = novo;
        free(antigo);
        
    }
    *(a+*tamanho)=x;
    (*tamanho)++;
    *erro=0;
    return a;
    
}

int main(){
    clock_t  inicio, fim;
    int  *a, capacidade=10, tamanho=0;
    int i, erro;
    a = (int*) malloc(sizeof(int)*capacidade);
    inicio = clock();
    for(i=0; i < 10000; i++){
        a = append_int(a, &tamanho, &capacidade, i*3, &erro);
        if(erro==1){
            printf("Erro de memória! \n");
            break;
        }
    } 
    fim = clock();
    printf("{");
        for(i = 0; i < tamanho; i++){
            printf("%d ", *(a+i));
        }
        printf("}");
    double tempo = ((fim-inicio)/(CLOCKS_PER_SEC)/1000.0);
    printf("\nTempo percorrido: %lfms\n", tempo);
    return 0;
}