#include <stdio.h>

int BuscaArray(int a[], int tamanho, int valor){
    int i, busca;
    for(i=0; i<tamanho; i++){
        if(a[i] == valor){
            busca = 1;
            break;
        }
        else busca = 0;
    }
    if(busca==1){
      return printf("Existe %d no Array \n", valor);
    }
    else return printf("Não existe %d no Array \n", valor) ;
}

int main(){
    int tamanho, valor;
    printf("Tamanho do Array: \n");
    scanf("%d", &tamanho);
    printf("Elementos do array: \n");
    int a[tamanho];
    for(int i=0; i<tamanho; i++){
        scanf("%d", &a[i]);
    }
    printf("Qual valor deseja saber se tem no array? \n");
    scanf("%d", &valor);
    printf("%d", BuscaArray(a, tamanho, valor));
    return 0;
}