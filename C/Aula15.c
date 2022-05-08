#include <stdio.h>

void printf_array(int a[], int tamanho){
    printf("{");
    for(int i=0; i <tamanho; i++){
        printf("%d ", a[i]);
    }
    printf("}\n");
}

int append_int(int a[], int capacidade, int tamanho, int x){
    if(tamanho==capacidade){
        return tamanho; /*Se a quantidade de elementos chegar a capacidade do array*/
    }
    a[tamanho] = x; /*adiciona o elemento ao índice que o valor do tamanho indica*/
    return ++tamanho; /*incrementa o tamanho para que o próximo elemento seja adicionado no último índice*/
}

int insert(int a[], int capacidade, int tamanho, int x, int index){
  if(tamanho==capacidade){
    return tamanho;
  }
  tamanho ++;
  for(int i=tamanho; i>index; --i){
    a[i]=a[i-1]; /*de acordo com que o valor do i vai abaixando, os elementos do indice para inserir o novo elemento para baixo, serão jogado para os indices sucessores para que no indice desejado seja colocado o novo elemento*/
  }  
  a[index] = x;
  return tamanho;
}

int find(int a[], int tamanho, int x){
  int i, index=-1;
  for(i=0; i<tamanho; i++){
    if(a[i]==x){
      index = i;
      break;
    }
  }
   return index;
}

int remove_last(int a[], int tamanho){
  if(tamanho>0)
    return --tamanho;
  return tamanho;
}



int main(){
    int capacidade=100, tamanho=0;
    int a[capacidade];
    tamanho = append_int(a, capacidade, tamanho, 10);
    printf_array(a, tamanho);
    tamanho = append_int(a, capacidade, tamanho, 20);
    printf_array(a, tamanho);
    tamanho = append_int(a, capacidade, tamanho, 30);
    printf_array(a, tamanho);
    tamanho = insert(a, capacidade, tamanho, 43, 1);
    printf_array(a, tamanho);
    printf("%d\n", find(a, tamanho, 30));
    tamanho = remove_last(a, tamanho);
    printf_array(a, tamanho);
    return 0;
}