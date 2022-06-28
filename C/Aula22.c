#include <stdio.h>
#include <stdlib.h> // Funções de gerenciamento de memória

/*
malloc: aloca memória
free: libera memória
*/ 


int main(){
    int *p1, n;
    //p1 = malloc(4); //cria um espaço de memória
    //*p1 = 10;
    scanf("%d", &n);  //n é a quantidade de memória para o array (tamanho)
    p1 = malloc(sizeof(int)*n);  //sizeof calcula a memória para alocar um número inteiro
    printf("Endereço do inicio da memoria: %p\n", p1);
    if(p1==0) printf("Erro ao alocar memória\n");
    for(int i=0; i < n; i++)
        scanf("%d", p1+i);
    
    for(int i=0; i < n; i++)
        printf("%d ", *(p1+i));
    free(p1);   
    return 0; 
}