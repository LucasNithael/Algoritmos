#include <stdio.h>

int main(){
  int a=1, b=2, c=3, d=4, e=5;
  int *p;
  p = &c;
  printf("a: %d\n", a);  
  printf("b: %d\n", b);
  printf("c: %d\n", c);
  printf("d: %d\n", d);
  printf("e: %d\n", e);
  *p = 100;
   p = p+1;      //pulará 4 bytes para o próximo endereço de memória: b
  *p = 200; //b
  
  
  printf("\n");
  printf("a: %d\n", a);  
  printf("b: %d\n", b);
  printf("c: %d\n", c);
  printf("d: %d\n", d);
  printf("e: %d\n", e);
  

  return 0;
}














/*#include <stdio.h>

int main(){
    int a;
    int *p;     //variável do tipo que guarda o endereço de memória
    p = &a;
    a = 10;
    printf("Endereço de a: %p (%lld)\n", &a, (long long)&a);
    printf("Valor armazenado em a: %d\n",a);
    printf("Endereço de p: %p (%lld)\n", &p, (long long)&p);
    printf("Valor armazenado em p: %p\n", p);
    printf("Valor aonde p aponta: %d\n", *p);
    *p = 13;
    printf("Endereço de a: %p (%lld)\n", &a, (long long)&a);
    printf("Valor armazenado em a: %d\n",a);
    return 0;
}*/