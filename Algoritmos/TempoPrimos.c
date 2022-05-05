#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int primo(int a){
  int qtd = 0, i, t;
  
  for(i=2; i<a/2; i++){
    if(a%i==0){
      qtd++;
      break;
    }
  }
  return qtd;
}

int main() {
    int n;
    clock_t t;
    scanf("%d", &n);
    t = clock();
    if(primo(n)){
      printf("N primo\n");
    }
    else printf("Primo\n");
    t = clock() - t; 
  printf("Tempo de execucao: %lf", ((double)t)/((CLOCKS_PER_SEC/1000)));
    return 0;
}