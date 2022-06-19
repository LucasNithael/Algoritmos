#include <stdio.h>

int mmc(int a, int b){
  int aux = 0, result = 0;
  if(a<b){
    aux = a;
    a = b;
    b = aux;
  }
  for(int i=a; i<a*b; i++){
    if(i%a==0 && i%b==0){
      result = i; break;
    }
  }
  return result;
}

int main(){
  int a, b;
  scanf("%d %d", &a, &b);
  printf("MMC: %d \n", mmc(a, b));
}

