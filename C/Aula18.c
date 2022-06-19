#include <stdio.h>

void f1(int *p){
    *p = 50;
}

int main(){ 
    int a=20;
    int *pa = &a;
    printf("a: %d\n", a);
    f1(pa);
    printf("a: %d\n", a);
    return 0;
}