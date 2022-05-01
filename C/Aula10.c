#include <stdio.h>

int primo(n){
  int qtd=1, d=2;
  while(d!=(n/2+1) && qtd==1){
    if(n%d++==0){
      qtd++;
    }
  }
  if(qtd==2) return 0;
  else return 1;
}

int main(){
  int n, m;
  scanf("%d %d", &m, &n);
  while(n!=0){
    if(m%n==0){
      scanf("%d", &n);
      continue;
    }
    if(primo(n)){ 
      printf("%d É primo\n", n);
      n += n;
      printf("%d", n);
      break;
    }
    else{
      printf("%d Não é primo", n);
      break;
    }
      
  }  
}